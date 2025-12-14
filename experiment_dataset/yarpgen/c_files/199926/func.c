/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199926
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_3 [i_0] [i_0 - 1] [i_0 - 1]))))) || ((_Bool)1)));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_14 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_0]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_17 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))) != (2913021378913903197LL)));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 1] [i_2 + 2])) % (-455243990)));
                        }
                    }
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 402653184)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2070464885U)));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
                {
                    arr_19 [18LL] [18LL] [i_0] [i_5] = ((/* implicit */long long int) (((~(2056969429U))) != (((/* implicit */unsigned int) var_15))));
                    arr_20 [i_0] [i_1] = ((/* implicit */int) arr_0 [i_0]);
                    var_20 = (~(var_7));
                }
                for (int i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) (((+(-2913021378913903198LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])) : (2147483626)))))));
                    var_21 = ((/* implicit */long long int) (unsigned char)151);
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((_Bool) ((((arr_9 [5] [i_1]) ? (var_13) : (-455243993))) != (((/* implicit */int) (_Bool)1))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_28 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((var_13) / (((/* implicit */int) var_2))))) <= (2913021378913903191LL))), (((((/* implicit */int) arr_17 [i_0] [i_1] [i_0 - 1] [i_0 + 1])) >= (((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_0 - 1] [(_Bool)1]))))));
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)42700)) % (((/* implicit */int) (unsigned short)20102))))));
                    var_23 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((33285996544LL) << (((/* implicit */int) arr_16 [i_0 + 1] [i_0] [i_1] [i_1] [i_7] [i_7]))))) ? (min((-2129136285), (402653170))) : (arr_13 [i_0]))));
                }
                arr_30 [i_0] [i_1] = ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
    var_24 = var_14;
    var_25 = var_14;
    var_26 = ((/* implicit */int) var_11);
}
