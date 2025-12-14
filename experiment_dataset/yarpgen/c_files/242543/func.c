/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242543
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [15] [15] [15] = ((/* implicit */short) max((min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) max((arr_1 [i_0]), (var_4)))))), (((/* implicit */int) arr_4 [i_0]))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (arr_4 [i_0 + 1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_4 [i_2 - 1])) < (((/* implicit */int) arr_4 [i_2 - 1])))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
                {
                    for (short i_5 = 4; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_5] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)10]))) : (var_12)))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_16 [(unsigned short)10] [i_4] [i_3] [i_4] [i_4] [i_2]))))))) : (((((/* implicit */_Bool) ((arr_7 [i_5]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))) : (((unsigned long long int) var_8)))))))));
                            var_16 = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        {
                            arr_24 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned char) arr_16 [i_2 - 1] [i_3] [(unsigned char)11] [i_2] [i_2 + 1] [i_2 + 1]));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)46943)) >= (min((var_9), (((/* implicit */int) ((unsigned char) 808031073))))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_13 [(unsigned char)4] [(unsigned char)4] [4LL] [i_3 + 1])))) != (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned char)147)))))))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (short i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        {
                            arr_29 [(short)12] [i_3 + 1] [i_3] [i_9 + 1] = ((/* implicit */long long int) ((unsigned char) ((_Bool) (~(3845111501311937028LL)))));
                            arr_30 [i_2 + 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_2] [i_2] [(unsigned short)4] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((var_9) / (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (min(((+(arr_8 [i_2 - 1] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (-1134890861385261479LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11908)))))))) : (((unsigned long long int) ((var_7) / (((/* implicit */long long int) var_0)))))));
                            arr_31 [i_3] [11LL] [i_3] [7ULL] [i_3] = ((/* implicit */unsigned char) arr_2 [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
}
