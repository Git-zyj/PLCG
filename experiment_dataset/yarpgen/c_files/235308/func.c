/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235308
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) 1851297579627817822ULL);
        var_11 = ((/* implicit */unsigned char) (signed char)-84);
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) -322240477))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_13 += ((/* implicit */unsigned long long int) 0LL);
                        arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */long long int) (unsigned char)211);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */long long int) (signed char)75);
                            arr_16 [i_1] [i_1] = (unsigned char)0;
                            var_15 = ((/* implicit */int) (unsigned char)42);
                            var_16 |= ((/* implicit */unsigned short) (signed char)75);
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            var_17 = (unsigned short)55975;
                            arr_19 [i_4] [i_3] [i_2] = (unsigned char)9;
                            var_18 = ((/* implicit */unsigned char) (unsigned short)31);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) (signed char)90);
                            var_20 -= ((/* implicit */unsigned char) (unsigned short)8573);
                            var_21 = (unsigned char)0;
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = (unsigned char)34;
                            var_23 |= ((/* implicit */unsigned short) (unsigned char)187);
                        }
                        for (unsigned char i_9 = 3; i_9 < 22; i_9 += 3) /* same iter space */
                        {
                            var_24 &= (unsigned char)0;
                            arr_31 [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */int) (unsigned char)179);
                            var_25 = ((/* implicit */unsigned char) 4561754308165394571ULL);
                            var_26 = ((/* implicit */int) (unsigned char)221);
                        }
                        for (unsigned char i_10 = 3; i_10 < 22; i_10 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) (signed char)(-127 - 1));
                            var_28 = (_Bool)0;
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) (_Bool)1);
                            var_30 = ((/* implicit */_Bool) 9147204528540796274LL);
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) 14814832344920257122ULL))));
                            arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (unsigned char)83;
                        }
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned char) var_7);
    var_33 = ((/* implicit */long long int) var_5);
}
