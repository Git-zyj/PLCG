/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194170
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
    var_14 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) var_5)), (18283640549155652937ULL)))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 ^= ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [(unsigned short)0] [i_1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) ? (((((/* implicit */int) ((signed char) var_8))) & (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_1] [i_1] [(_Bool)1]), (arr_2 [(unsigned char)14] [i_0]))))))));
                var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_0 [i_1]))), (((((/* implicit */int) var_1)) | (((/* implicit */int) (_Bool)1))))))), ((~(((unsigned long long int) (unsigned char)77))))));
                var_18 -= ((/* implicit */_Bool) (-((+((-(((/* implicit */int) var_1))))))));
                arr_6 [i_1] [i_0] [11U] = ((/* implicit */unsigned long long int) ((((unsigned int) ((_Bool) arr_0 [(signed char)13]))) >> (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_4 [(unsigned char)1] [i_0] [(unsigned char)5])))), ((!(((/* implicit */_Bool) arr_1 [(short)0])))))))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_10)))));
                    var_20 += ((/* implicit */unsigned short) var_8);
                }
            }
        } 
    } 
}
