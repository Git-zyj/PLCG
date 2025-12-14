/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20303
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
    var_11 = ((/* implicit */signed char) (+(min((-9223372036854775805LL), (var_9)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [15U])) ? (var_9) : (((/* implicit */long long int) var_5))))) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) max(((unsigned char)40), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [16LL] [i_0])) : (var_6))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)81)) ? (2147483647) : (arr_0 [i_0])))) ? (max((-2147483647), (((/* implicit */int) arr_1 [4LL] [i_0])))) : (min((8191), (-725758379)))))));
        var_13 ^= min((((/* implicit */unsigned int) ((arr_0 [(unsigned char)19]) ^ (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) arr_1 [(signed char)4] [i_0]))))))), (max((max((((/* implicit */unsigned int) var_8)), (var_5))), (((/* implicit */unsigned int) arr_2 [11LL] [i_0])))));
    }
    for (int i_1 = 4; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) arr_4 [i_1] [i_2])), (((/* implicit */long long int) var_6))))) ? (max((((/* implicit */long long int) arr_1 [i_1 - 2] [i_1 + 1])), (((((/* implicit */long long int) -2001208068)) / (1236039215609621304LL))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) arr_5 [6LL] [i_2] [(signed char)0]))))))))))))));
            arr_7 [i_1] [i_2] = var_2;
            var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(signed char)5] [6]))))) ? (min((((/* implicit */long long int) 2147483647)), (var_9))) : (((/* implicit */long long int) 2147483647)))));
        }
        arr_8 [(signed char)0] = ((/* implicit */long long int) arr_0 [10]);
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_16 = ((/* implicit */signed char) ((max((var_4), ((~(8191))))) | ((-2147483647 - 1))));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)0)) ? (var_5) : (arr_5 [i_1] [i_3] [i_3]))) ^ (((/* implicit */unsigned int) 245591267))))), (max((((/* implicit */long long int) (+(var_5)))), (max((-9223372036854775795LL), (((/* implicit */long long int) (unsigned char)170)))))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) ((((var_2) - (-725758377))) | (((/* implicit */int) (unsigned char)24))));
            var_19 = ((/* implicit */signed char) ((arr_12 [i_1 + 1] [i_4]) | (((/* implicit */int) arr_4 [i_1 + 1] [(signed char)18]))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(arr_6 [i_1])))) ? (var_3) : ((+(var_6))))) / ((~(max((((/* implicit */int) (signed char)-36)), (-179017091)))))));
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)16] [i_5]))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((/* implicit */long long int) max((-8191), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [13]))) ^ (9223372036854775786LL)))) ? (((9223372036854775802LL) + (((/* implicit */long long int) arr_11 [(unsigned char)19])))) : (((/* implicit */long long int) ((unsigned int) var_0))))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_23 -= ((/* implicit */long long int) max(((~(arr_16 [i_1 - 2]))), (((/* implicit */unsigned int) arr_4 [(signed char)5] [14]))));
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_2))))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_23 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [14LL] [i_7]))))) ^ ((~(arr_16 [i_1 - 1])))));
                        var_25 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)34)), ((-(((8162) + (arr_18 [i_1] [1U] [i_7] [7U])))))));
                    }
                } 
            } 
        }
    }
    var_26 ^= ((/* implicit */long long int) max(((signed char)35), (((/* implicit */signed char) ((511) > (((/* implicit */int) var_8)))))));
}
