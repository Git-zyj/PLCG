/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24189
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (-(arr_3 [i_0]))))) ? (((int) ((((/* implicit */_Bool) var_10)) ? (2241081053U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39571)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_14 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (1672006979680582833ULL)))))))));
            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((unsigned long long int) var_3)))))));
        }
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25964)) ? (500102380U) : (((/* implicit */unsigned int) -1846271782))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */_Bool) 1151795604700004352ULL)) ? (2) : (((/* implicit */int) (short)-32753))))))) ? ((-(((/* implicit */int) (unsigned char)16)))) : (((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */_Bool) 1344640332U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-32753)))) : (((/* implicit */int) ((unsigned char) (unsigned short)39587)))))));
    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) : (12822796803956126374ULL)))) ? ((-(((long long int) 6685291231257760329ULL)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_5)) : (2970736068451041308ULL))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((signed char) arr_6 [i_3]))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned long long int) ((unsigned char) (~((~(var_5))))));
                    var_20 = ((((/* implicit */_Bool) ((((_Bool) var_5)) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_10 [i_4] [i_3])) : (arr_12 [i_2] [i_2] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_13 [i_2]) : (1543016474U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(2147483635)))))) : ((+(((((/* implicit */_Bool) var_4)) ? (var_9) : (2517004363599482344ULL))))));
                    arr_15 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (+(var_12)))) ? (((unsigned long long int) var_7)) : (((((/* implicit */_Bool) arr_13 [i_2])) ? (arr_12 [i_3] [i_3] [i_4]) : (14959892988638477777ULL))))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    var_21 = ((int) ((unsigned short) arr_10 [(signed char)0] [(signed char)0]));
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) arr_6 [(unsigned char)20])))));
                    arr_20 [(unsigned short)18] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)166)))))));
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (arr_7 [i_2]))))));
                }
            }
        } 
    } 
}
