/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226114
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (_Bool)1))));
    var_16 = ((/* implicit */signed char) max((var_16), ((signed char)33)));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) 4294967295U))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((1376925567965817488LL), (((/* implicit */long long int) (signed char)15))))))) ? (((unsigned int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((short) 6U))))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-69)))) * (arr_0 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (435411879) : (((/* implicit */int) var_9))))))))));
        var_19 = ((/* implicit */unsigned int) ((((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))) / (23U)))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)29576)), (arr_0 [i_0]))))))) : (-435411880)));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35976)) ^ (((/* implicit */int) (short)12445))))) ? ((~(((9662961958276175713ULL) << (((((/* implicit */int) (unsigned char)254)) - (251))))))) : (((/* implicit */unsigned long long int) 1572004673596262154LL))));
                        var_21 = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) var_11))))));
                        var_22 += ((/* implicit */signed char) 6U);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) (unsigned short)29576)))) || (((((/* implicit */_Bool) (unsigned char)18)) || (((/* implicit */_Bool) (unsigned short)65535))))));
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            for (short i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    {
                        arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)29605));
                        var_25 = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_1)) << (15))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        var_26 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((7006728904584190081ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (unsigned char)167))))))))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-((+(4279928150U))))))));
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned char)207)))) % (((/* implicit */int) var_14))));
    }
    var_29 = ((/* implicit */short) var_13);
}
