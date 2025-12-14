/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51783
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))))) : ((-(4013738149560957648ULL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [2]))));
                            arr_16 [i_1] [i_1 - 2] [13] [i_4] [i_1] [i_1 - 2] = ((/* implicit */unsigned int) (((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) + (arr_13 [i_0]))))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2]))))))));
                            var_17 = ((/* implicit */unsigned int) 2270734915520853319LL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_18 = var_2;
                            var_19 ^= ((/* implicit */unsigned short) ((unsigned char) (!((_Bool)1))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((int) 14433005924148593986ULL))) || (((/* implicit */_Bool) ((unsigned int) 4013738149560957630ULL))))))));
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_7]);
            arr_25 [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2]))))) ? (((((/* implicit */int) arr_11 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2])) + (((/* implicit */int) arr_11 [i_7 - 2] [i_7 + 2] [17U] [i_7 - 2])))) : ((-(((/* implicit */int) arr_11 [i_7 - 2] [i_7] [14] [i_7 - 2]))))));
            var_21 ^= (_Bool)0;
        }
        for (int i_8 = 3; i_8 < 21; i_8 += 4) 
        {
            var_22 ^= (!(((/* implicit */_Bool) (unsigned char)35)));
            var_23 &= ((/* implicit */_Bool) (signed char)-17);
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_13 [i_8 + 1]))));
            var_25 = (~(((int) ((_Bool) var_3))));
            arr_29 [1ULL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(var_9)))), (max((14433005924148593986ULL), (((/* implicit */unsigned long long int) ((signed char) 11813219841390014533ULL)))))));
        }
        var_26 = ((/* implicit */signed char) arr_19 [i_0]);
    }
    var_27 = var_5;
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 4013738149560957630ULL)))) / (var_9)))) ? (((/* implicit */unsigned long long int) ((var_10) / (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) : (((((/* implicit */_Bool) var_7)) ? (14433005924148593967ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8))))))));
    var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (-(var_11)))))));
}
