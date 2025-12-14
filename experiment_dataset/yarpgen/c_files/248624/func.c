/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248624
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
    var_20 = ((/* implicit */short) ((((var_17) >= (((/* implicit */int) (short)32767)))) ? (max(((-(var_13))), (((/* implicit */int) var_9)))) : (var_13)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)32762))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */int) arr_0 [i_0]);
            arr_7 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32762)) == (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            var_22 = ((/* implicit */short) 17921435070584946153ULL);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (arr_1 [i_2]))))));
            /* LoopSeq 4 */
            for (short i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                var_24 = ((/* implicit */_Bool) (~(arr_13 [i_2 - 1] [i_2 - 1] [i_2])));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [i_4] = ((/* implicit */short) ((_Bool) ((((((/* implicit */int) (short)-32763)) + (2147483647))) << (((26716057) - (26716057))))));
                    arr_18 [i_0] [i_0 - 4] [i_0] = ((/* implicit */_Bool) arr_12 [i_0 - 2] [i_2 - 1] [i_4] [i_4]);
                    arr_19 [i_0 - 4] [i_0] [i_0] [i_0] [i_3] = arr_11 [i_2] [i_0] [i_2];
                    arr_20 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32741))) : (arr_1 [i_2 - 1]));
                }
                for (int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    arr_24 [i_2] [i_2 - 1] [i_0] = ((/* implicit */_Bool) 2147483647);
                    arr_25 [i_0 - 3] [i_0] [i_0 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_21 [i_0 - 4] [i_0 - 4])));
                }
            }
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)32738))));
                arr_28 [i_2 - 1] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_2]);
            }
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) var_19);
                var_28 = ((/* implicit */unsigned long long int) arr_29 [i_2] [i_2] [i_2 - 1]);
            }
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
            {
                arr_35 [i_0] [i_2] [4ULL] [i_0] = (-(arr_31 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_39 [i_0] [i_9] = ((_Bool) (~(9714597930304443368ULL)));
                    arr_40 [i_0] [i_8] [i_2] [i_0] = ((/* implicit */short) arr_1 [i_0 + 2]);
                }
            }
        }
    }
}
