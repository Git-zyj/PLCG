/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242334
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((var_2) + (((/* implicit */long long int) 1646698580)))) <= (((/* implicit */long long int) 558581605))))) + (((/* implicit */int) (signed char)-48))));
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((_Bool) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) (signed char)30))))));
        var_12 |= (~(((/* implicit */int) var_7)));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) var_7);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3856695932U)) ? (((/* implicit */unsigned long long int) 438271360U)) : (13506947132871396260ULL)))) && (((/* implicit */_Bool) ((long long int) arr_7 [10] [i_2] [i_1])))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                arr_13 [i_3] [i_2] = ((/* implicit */unsigned char) min((var_9), (((/* implicit */long long int) arr_12 [i_1] [16U] [i_3] [i_3 + 1]))));
                var_13 = (-(((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)60))) <= (var_1))))));
                var_14 = ((/* implicit */unsigned int) arr_11 [i_1] [i_1] [(unsigned char)5]);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4392101596187715610LL)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) arr_7 [i_1] [i_2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_4])) ? (var_1) : (((/* implicit */long long int) arr_7 [i_1] [(short)7] [i_1]))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) min((arr_1 [i_1]), (((unsigned short) arr_1 [i_1]))))), (((((/* implicit */int) ((unsigned char) 18280011578701454091ULL))) >> (((min((var_1), (((/* implicit */long long int) var_6)))) + (2917655297839247405LL))))))))));
            }
            arr_16 [i_1] = ((/* implicit */short) arr_15 [i_1] [i_1] [i_1]);
        }
        for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1] [16] [i_1])))))), (((/* implicit */int) ((arr_11 [i_1] [i_1] [i_5]) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)4])))))))))))));
            arr_20 [(unsigned char)7] [i_5] [i_5] = ((/* implicit */unsigned char) var_8);
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) -1201627327)) || (((/* implicit */_Bool) min((-5), (((/* implicit */int) (signed char)60))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)-48)))))));
                arr_23 [i_5] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                arr_24 [i_5] = ((/* implicit */unsigned char) var_4);
            }
        }
    }
}
