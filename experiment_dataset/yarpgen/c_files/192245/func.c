/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192245
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
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_20 = (-(var_15));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_9)) - (132)))));
                    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) arr_7 [i_3]);
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((short) ((var_13) / (var_15)))))));
                                arr_14 [i_2] = ((/* implicit */unsigned char) var_3);
                                arr_15 [5] [9LL] [i_2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                }
                var_25 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) | (6500530254106549409LL))));
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -6500530254106549410LL)) || (((/* implicit */_Bool) -6500530254106549409LL)))))) <= ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5]))) : (var_17)))))));
                    var_26 -= ((/* implicit */unsigned char) (+(min((((((/* implicit */int) var_14)) + (((/* implicit */int) var_14)))), (((int) arr_5 [i_0] [i_1] [i_5]))))));
                    var_27 = ((((((/* implicit */int) var_1)) <= (((/* implicit */int) var_4)))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_16)))));
                    var_28 = ((/* implicit */short) ((((/* implicit */long long int) (-(((((/* implicit */int) var_7)) * (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1]))))))) / (max((6500530254106549409LL), (6500530254106549409LL)))));
                    var_29 = ((/* implicit */unsigned short) min((6500530254106549405LL), (-6500530254106549409LL)));
                }
                for (short i_6 = 2; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_6] [i_6 - 1] [i_6 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */short) ((((/* implicit */int) ((((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7]))))) < (((/* implicit */unsigned int) ((int) var_17)))))) / (var_13)));
                                var_32 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -6500530254106549406LL)) ? (-6500530254106549409LL) : (-6500530254106549406LL))) ^ (6500530254106549405LL)));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) 6500530254106549405LL)) ? (-6500530254106549409LL) : (-6500530254106549405LL))) / (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_6))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) var_1))))))))));
                }
                for (short i_9 = 2; i_9 < 20; i_9 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */int) max((((/* implicit */unsigned char) var_16)), (arr_30 [i_0] [i_0 - 1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))))));
                    arr_31 [i_0] [i_1] [i_9] = ((/* implicit */short) ((-6500530254106549401LL) - (-6500530254106549405LL)));
                }
            }
        } 
    } 
    var_35 = ((((_Bool) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_8))))) ? (var_12) : (((/* implicit */long long int) var_17)));
}
