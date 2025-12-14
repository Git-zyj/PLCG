/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33878
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (unsigned short)17116)) || (((/* implicit */_Bool) (unsigned short)17093))))));
                var_10 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_4)))));
                var_11 *= ((/* implicit */unsigned int) ((var_0) & (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        var_12 = ((long long int) (unsigned short)62325);
        var_13 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned short)32544)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                arr_16 [6U] [i_4] = ((/* implicit */unsigned int) var_2);
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    arr_19 [12ULL] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned char) var_0));
                    arr_20 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_0)))));
                }
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                {
                    var_14 += ((/* implicit */unsigned short) ((long long int) ((long long int) var_8)));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_6))));
                }
                for (long long int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                {
                    var_16 |= ((/* implicit */unsigned char) var_0);
                    var_17 = ((/* implicit */long long int) var_9);
                }
                for (long long int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                {
                    arr_28 [i_3] [i_4] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) var_0)))))) | ((~(var_5)))));
                    arr_29 [i_3] [i_8] [i_8] &= ((/* implicit */unsigned short) var_6);
                }
                /* LoopNest 2 */
                for (unsigned int i_9 = 4; i_9 < 22; i_9 += 3) 
                {
                    for (long long int i_10 = 3; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned short) ((long long int) ((_Bool) var_8)));
                            var_19 = ((/* implicit */unsigned long long int) var_2);
                            var_20 = ((/* implicit */unsigned short) ((int) (+(var_5))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = (+(var_5));
}
