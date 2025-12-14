/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241555
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
    var_20 |= var_17;
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 5687604237972009073ULL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_1 [i_0 + 3]), (arr_1 [i_0 - 1]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) -1250564350)), (8013397321440822471ULL))) != (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (_Bool)0)), (arr_13 [i_2] [i_1] [i_1]))))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((~(arr_12 [i_0] [i_1] [i_2] [i_4] [i_0 - 1])))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (12759139835737542543ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) 12759139835737542544ULL)))))))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 12228495739333996101ULL))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_9 [i_0 + 1] [i_0 + 3]))));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_11))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [8LL] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_6] [i_1] [i_5]))))) && (((/* implicit */_Bool) (signed char)127))));
                            arr_22 [i_0] [i_0] [(unsigned short)10] [11ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-11970))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) max((12759139835737542543ULL), (((/* implicit */unsigned long long int) 63U))));
            }
        } 
    } 
}
