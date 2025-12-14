/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217380
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
    var_18 = ((/* implicit */_Bool) (short)-28480);
    var_19 = ((/* implicit */short) var_14);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_4 [i_0] [(unsigned short)6]);
                    var_20 -= ((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) * (((long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))));
                    var_21 &= ((/* implicit */unsigned char) ((((arr_0 [i_0 + 1] [i_0 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) (!(arr_3 [i_2] [i_1] [i_0]))))))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (arr_5 [0ULL])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_13))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_5 = 3; i_5 < 20; i_5 += 4) 
                {
                    var_23 = ((/* implicit */signed char) max((arr_10 [(unsigned short)6]), (min((((long long int) arr_17 [i_5])), (((/* implicit */long long int) ((unsigned int) var_9)))))));
                    var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 127674890)) ? (((/* implicit */int) var_12)) : (arr_14 [i_4 + 1] [i_4 + 1] [i_3])));
                    var_25 |= ((/* implicit */unsigned short) 17651538061251448568ULL);
                }
                /* vectorizable */
                for (unsigned int i_6 = 2; i_6 < 21; i_6 += 3) 
                {
                    var_26 = ((unsigned char) arr_14 [i_4 + 1] [i_6 + 1] [i_4]);
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 20; i_7 += 3) 
                    {
                        for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((unsigned char) arr_11 [i_7] [i_6 - 2]));
                                var_28 = ((/* implicit */long long int) arr_17 [i_8 - 1]);
                                arr_27 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) arr_22 [i_3] [i_4] [21LL] [i_4] [(unsigned char)7]);
                    arr_28 [(_Bool)1] [i_6] [i_6] [i_4] = ((/* implicit */long long int) (unsigned char)24);
                }
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((-5670013996076574185LL) - (((/* implicit */long long int) arr_17 [i_4])))) + (5670013998995690706LL))))))));
                            var_31 ^= ((/* implicit */long long int) (short)-1);
                        }
                    } 
                } 
            }
        } 
    } 
}
