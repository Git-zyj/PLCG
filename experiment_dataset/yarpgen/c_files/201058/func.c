/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201058
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
    var_20 = ((/* implicit */unsigned short) var_10);
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-64))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((_Bool) max((max((((/* implicit */int) (unsigned short)13940)), (418607357))), (((/* implicit */int) max(((unsigned short)48308), (((/* implicit */unsigned short) (signed char)-2)))))))))));
                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)48308)) && (((/* implicit */_Bool) (unsigned char)201)))) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_3 [i_1] [4ULL] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */int) min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) arr_10 [i_0] [i_3 - 1] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(signed char)8] [i_3] [i_3])) ? (var_12) : (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [(unsigned char)6] [(unsigned char)6]))))) : ((~(var_14)))))));
                            arr_11 [(signed char)10] [11LL] [11LL] [(short)13] [(short)13] [(signed char)10] = 1099511627775ULL;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 2; i_4 < 7; i_4 += 2) 
    {
        arr_16 [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (unsigned char)234)), (arr_7 [(_Bool)1] [(_Bool)1] [14ULL] [(_Bool)1])))))) ? ((+(((((/* implicit */int) (unsigned char)10)) * (arr_2 [i_4 + 1] [i_4] [9LL]))))) : ((-((+(((/* implicit */int) arr_15 [0ULL]))))))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) : (10379532723301793443ULL)));
    }
}
