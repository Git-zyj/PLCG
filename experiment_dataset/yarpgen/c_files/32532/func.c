/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32532
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_15)))));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                arr_7 [i_0] [i_1] [i_2 - 1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_3)) > (var_17)));
                var_20 ^= ((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1]);
                var_21 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_19))))), (((unsigned int) -2397459967119826459LL))))));
                arr_8 [i_0] [i_1] [(unsigned char)0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-((+(1491983175)))))) + (((((/* implicit */_Bool) ((unsigned short) arr_6 [i_2]))) ? (var_18) : (((/* implicit */unsigned long long int) var_2))))));
            }
            arr_9 [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 787561321)) ? ((+(min((1707783626), (((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((/* implicit */int) arr_5 [i_0]))));
        }
        arr_10 [i_0] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1])) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_2 [i_0 - 1] [i_0])))) : (min((-1707783627), (1946611153)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) -1946611154))) || (((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (583230421)))))))) : (arr_1 [i_0])));
        arr_11 [i_0] = ((/* implicit */_Bool) (+(var_7)));
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 2) 
        {
            {
                var_22 = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) -6545960076797657525LL)) : (18446744073709551615ULL)))), (((/* implicit */unsigned long long int) (short)16875))));
                arr_17 [i_3 - 1] [i_3 - 1] [i_4 - 2] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (arr_16 [i_3])))));
                arr_18 [i_3 - 1] = ((_Bool) (~((~(((/* implicit */int) (signed char)97))))));
                var_23 = ((/* implicit */_Bool) arr_14 [(signed char)0] [i_4]);
                arr_19 [i_3 - 1] [i_4] = ((((/* implicit */_Bool) min((8177240226067981461LL), (((/* implicit */long long int) 2147483647))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3 - 1])) + (((/* implicit */int) var_0))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_4);
}
