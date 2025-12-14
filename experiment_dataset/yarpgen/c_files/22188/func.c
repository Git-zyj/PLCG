/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22188
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
    var_16 += ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 460725566)) ? (((/* implicit */unsigned int) var_1)) : (var_11)))) || (((/* implicit */_Bool) var_14)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((460725566), (((/* implicit */int) ((unsigned char) var_2)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) var_15))) : ((-(((/* implicit */int) var_15)))))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_18 = ((/* implicit */long long int) -460725566);
                    var_19 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    arr_12 [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((long long int) arr_10 [9ULL] [i_1] [i_3] [i_3]))) ? (4294967291U) : ((~(var_4))))), (((/* implicit */unsigned int) min(((_Bool)1), ((!(arr_11 [3U] [3U] [3U] [0LL]))))))));
                    arr_13 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_3])) ? (((/* implicit */int) max((arr_9 [i_0 - 1] [i_1] [i_3]), (arr_9 [i_0 + 1] [i_0 + 1] [(_Bool)1])))) : ((+(((/* implicit */int) ((arr_5 [i_0 + 1] [i_1] [i_3] [i_1]) < (arr_7 [(unsigned char)2] [(unsigned char)2]))))))));
                }
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                {
                    arr_16 [i_0] [i_4] [2] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) max((arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0]), ((signed char)(-127 - 1))))), (((((/* implicit */_Bool) 1386199365U)) ? (var_3) : (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) 460725569))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((460725590) <= (((/* implicit */int) (unsigned short)65535)))))))) * (((arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [(_Bool)1] [i_1] [i_4] [10LL]) : (((/* implicit */unsigned int) 460725539))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    arr_19 [i_0] [4LL] [i_5] [i_0] = ((/* implicit */int) ((_Bool) (-((+(((/* implicit */int) arr_11 [i_0] [i_0] [5LL] [i_5])))))));
                    arr_20 [i_5] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0 - 1] [i_5])) / (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_5])))), (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 + 1] [i_5])) > (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0 - 1] [i_5])))))));
                }
            }
        } 
    } 
}
