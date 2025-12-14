/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42544
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
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) min((arr_4 [(unsigned char)2] [i_1] [8]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 929880125)) && (((/* implicit */_Bool) ((long long int) arr_0 [i_1 - 1])))))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_1 [i_0]))), (min((var_5), (var_5))))))));
                    arr_8 [(unsigned short)2] [(unsigned short)2] [i_2 - 1] |= ((/* implicit */unsigned char) max(((~(((/* implicit */int) min(((unsigned short)2996), ((unsigned short)2996)))))), (((/* implicit */int) var_10))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min(((unsigned short)2987), ((unsigned short)2996))))));
                                var_14 = ((/* implicit */int) max((var_14), ((+(max((((/* implicit */int) (unsigned char)179)), (((((/* implicit */int) (unsigned short)20183)) ^ (((/* implicit */int) (unsigned char)26))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 4; i_5 < 8; i_5 += 1) 
                {
                    arr_17 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(var_5)));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((unsigned int) (unsigned short)62540)))));
                }
                var_16 = ((/* implicit */unsigned char) ((min((arr_10 [i_0 + 2] [(unsigned short)5]), (arr_10 [i_0 + 1] [(unsigned char)2]))) <= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)62540), (((/* implicit */unsigned short) (unsigned char)76))))))));
                arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((var_5) + (((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) ((unsigned short) var_1)))))) ^ (max((min((var_0), (((/* implicit */long long int) arr_0 [(unsigned short)3])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))))));
                arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)77)))))))) < ((~((+(((/* implicit */int) (unsigned char)229))))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
}
