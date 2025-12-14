/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22251
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
    var_20 = ((/* implicit */_Bool) max((var_20), (var_1)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) arr_0 [16ULL]);
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-87))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (short)-18467)) != (((/* implicit */int) var_18)))))), (((unsigned int) arr_6 [i_1]))));
        var_23 = ((/* implicit */signed char) max((((min((11335512428245980445ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) | (((/* implicit */unsigned long long int) max((-1), (((/* implicit */int) arr_2 [i_1]))))))), (((/* implicit */unsigned long long int) 2147483647))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */long long int) var_16);
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-42))));
        var_25 = ((/* implicit */unsigned int) (~(arr_10 [i_2] [i_2 - 1])));
        arr_12 [i_2] = ((((/* implicit */_Bool) 263392780109503465ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (arr_5 [i_2])))) : ((+(((/* implicit */int) (short)-6621)))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_26 &= ((/* implicit */_Bool) ((short) var_13));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((signed char) arr_20 [i_2 - 1] [i_5 + 1])))));
                            arr_23 [i_2] [i_4] [i_2] [i_6] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            arr_28 [i_2] [i_3] [i_3] [i_3] [i_2] [i_7] = ((/* implicit */int) var_4);
                            arr_29 [i_2] [i_3] [i_4] [i_2] [i_5] [i_7] = ((/* implicit */unsigned long long int) var_6);
                        }
                        arr_30 [i_2] [i_2] = (-(((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_2] [i_5])) ? (((/* implicit */unsigned long long int) arr_27 [i_2 - 1] [i_2] [i_2 - 1] [i_4] [i_5 - 1])) : (arr_9 [i_2]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 17; i_8 += 4) /* same iter space */
    {
        arr_35 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)18467))) ? ((-(-4681112609363225373LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_8])))));
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 17; i_9 += 3) 
        {
            for (long long int i_10 = 1; i_10 < 16; i_10 += 3) 
            {
                {
                    var_28 = ((/* implicit */short) ((signed char) ((int) (_Bool)0)));
                    arr_41 [i_10] [i_9] [i_8] = var_4;
                }
            } 
        } 
        arr_42 [i_8] = ((/* implicit */signed char) (-((~(7636254896075405189ULL)))));
    }
    var_29 = ((/* implicit */unsigned char) (((+((((_Bool)1) ? (var_10) : (325016371U))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned int) var_11))))) != (((var_1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39)))))))))));
}
