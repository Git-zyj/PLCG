/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245308
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                var_12 = var_6;
                arr_8 [i_1] = ((/* implicit */unsigned short) (+(max((2027289844U), (((/* implicit */unsigned int) (short)32752))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_0))))))));
                var_14 = ((/* implicit */unsigned int) (((_Bool)1) ? (min((10ULL), (((/* implicit */unsigned long long int) min((2027289844U), (((/* implicit */unsigned int) var_2))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) 2027289844U))), (1654645920U))))));
                var_15 = ((/* implicit */unsigned short) max((max(((-(((/* implicit */int) (signed char)-78)))), (((/* implicit */int) var_10)))), ((-((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                var_16 |= max((((/* implicit */unsigned char) (!((_Bool)1)))), (((unsigned char) var_4)));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        var_17 += ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_1)))))));
                        arr_17 [i_5] [i_1] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) var_0);
                        var_18 = ((/* implicit */unsigned int) (signed char)56);
                        var_19 = ((/* implicit */int) ((unsigned long long int) (-(2147483646))));
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((2027289857U), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-8)), ((short)-11128))))));
                        arr_22 [(unsigned char)14] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)6632)) * (((/* implicit */int) (!(((/* implicit */_Bool) 2027289842U)))))));
                        arr_23 [i_6] [i_6] [i_3] [(unsigned short)18] [12] [i_1] [i_3] |= min((var_8), (((/* implicit */int) (unsigned char)23)));
                        var_21 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((var_5), ((unsigned short)0)))) : (((/* implicit */int) (short)32767)))));
                    }
                    arr_24 [(unsigned char)21] [i_1] [i_1 - 2] [i_1] [0U] = ((/* implicit */unsigned long long int) var_11);
                    var_22 = ((/* implicit */unsigned char) (((_Bool)1) ? (var_4) : (((/* implicit */int) ((unsigned short) (short)32766)))));
                }
            }
        }
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3564156719U)))), (max((((/* implicit */long long int) (unsigned short)25490)), (var_7)))))) ? (((unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) var_8))));
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(min((536608768), (((/* implicit */int) var_10)))))))));
        arr_28 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((589738524U), (((/* implicit */unsigned int) var_1))))) * (((((/* implicit */_Bool) var_0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    }
    var_25 = ((_Bool) (signed char)108);
}
