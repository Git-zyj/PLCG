/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25838
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
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(8791633658727837040LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19359))) : (min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0 + 1]))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_2 [9])))), (((int) 501863466))))) >= (((min((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (arr_1 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) (short)508)) : (((/* implicit */int) (unsigned char)39)))))));
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_13 [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-508))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_3]))) : (min((((/* implicit */unsigned int) arr_10 [i_3] [i_2] [i_2] [i_3])), (4294836224U))))) + (((/* implicit */unsigned int) (((-(1086489230))) / (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))));
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-73)) > (((((/* implicit */int) arr_9 [9] [8] [i_3])) | (((((/* implicit */_Bool) (signed char)62)) ? (arr_10 [i_2] [i_2] [i_2] [i_2]) : (arr_11 [i_2])))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_4]))));
                    var_21 = ((/* implicit */short) -8791633658727837054LL);
                }
            }
        } 
    } 
    var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)10766))) % ((-(-7532444899555652931LL)))))) && (((/* implicit */_Bool) var_3))));
}
