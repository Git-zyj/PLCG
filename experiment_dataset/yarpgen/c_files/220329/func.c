/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220329
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_2 [2ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((9223372036854775792LL) >= (((/* implicit */long long int) 300507700U)))))));
        var_17 &= ((/* implicit */_Bool) (-2147483647 - 1));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [6LL] [6ULL] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483624)))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_18 [(short)11] [3ULL] [(short)9] [(_Bool)1] [(unsigned short)3] [20U] [(_Bool)0] = ((/* implicit */long long int) arr_14 [(unsigned short)12] [3U] [15U] [(_Bool)1] [0U] [(short)3]);
                            var_18 -= ((/* implicit */short) 613606687);
                        }
                    } 
                } 
            } 
        }
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((-2147483633) <= (((/* implicit */int) arr_0 [15])))))))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1))))) ? (arr_4 [(short)14]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)1)))))))));
    }
    var_20 = ((/* implicit */unsigned int) (short)4081);
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned short i_7 = 1; i_7 < 14; i_7 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-4098)), (var_13)));
                arr_24 [(short)8] [4ULL] |= ((/* implicit */_Bool) var_2);
                var_22 = ((min((arr_3 [i_7 - 1]), (((/* implicit */unsigned int) var_6)))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_7 + 3])))));
                var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                arr_25 [i_6] [7U] [i_6] = ((/* implicit */long long int) max(((-((-(var_8))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)65532)))) % ((~(((/* implicit */int) var_15)))))))));
            }
        } 
    } 
    var_24 = var_15;
}
