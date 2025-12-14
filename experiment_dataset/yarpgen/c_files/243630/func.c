/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243630
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) (-(((2800968922740377829ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-14165))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-14165))))))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_19 = (-(((/* implicit */int) arr_5 [i_0 + 4])));
                        arr_11 [i_3 - 1] [(unsigned short)4] [i_1] [i_3 - 1] = (((_Bool)1) ? (((((/* implicit */int) (unsigned char)124)) & (var_0))) : (((((/* implicit */_Bool) 17325347267413813909ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0)))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        arr_12 [i_3] [i_3] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_5 [i_1])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        arr_20 [i_1] [i_0] [11] = ((/* implicit */unsigned int) 17325347267413813909ULL);
                        var_21 = ((/* implicit */int) ((unsigned long long int) (short)-14170));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 10; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -4973249623703503991LL))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (max((-4973249623703504013LL), (((/* implicit */long long int) var_0))))))) : (arr_3 [i_6] [i_7 + 2])));
                    var_23 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)0), ((unsigned short)0)))) != (((/* implicit */int) max(((short)14934), (((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-106)))))))));
                }
            } 
        } 
        var_24 |= ((/* implicit */unsigned short) max((var_5), (((/* implicit */signed char) min((arr_16 [i_6] [(unsigned short)12] [0] [i_6]), (arr_16 [(_Bool)0] [12U] [12U] [i_6]))))));
    }
    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 2) 
    {
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)65532)), (8781726337076458868ULL)));
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) var_2))))))));
    }
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((((/* implicit */int) max(((unsigned short)36312), (((/* implicit */unsigned short) (_Bool)0))))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (signed char)22)))))) ? (((/* implicit */unsigned long long int) var_0)) : (min((((/* implicit */unsigned long long int) var_0)), (max((var_4), (((/* implicit */unsigned long long int) (short)-14186))))))))));
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)29224)) ? (min((((/* implicit */long long int) min(((short)-14165), (var_11)))), (max((((/* implicit */long long int) (short)-14165)), (-4973249623703503999LL))))) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) var_6)), (var_11)))) - (((/* implicit */int) min(((unsigned char)107), (((/* implicit */unsigned char) (signed char)-72))))))))));
}
