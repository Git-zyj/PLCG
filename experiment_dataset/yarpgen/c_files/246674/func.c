/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246674
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
    var_19 = ((/* implicit */signed char) 1264092361U);
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (3) : (((/* implicit */int) var_11))))))) * (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27280))) : (var_7))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    var_21 = ((/* implicit */unsigned long long int) var_0);
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)27296)), (15284543087330327791ULL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            arr_16 [i_2] [i_1] [i_1] [i_4 - 1] = ((/* implicit */unsigned int) arr_9 [i_2] [i_1] [i_2] [i_4 + 1]);
                            var_23 = ((/* implicit */unsigned short) max((arr_1 [i_3]), (((/* implicit */long long int) ((arr_1 [i_2]) == (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) (-2147483647 - 1))))));
                        }
                        arr_17 [(signed char)4] [8ULL] [i_1] [i_2] [i_2] = ((/* implicit */signed char) min((max((((/* implicit */long long int) var_9)), (arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) (unsigned short)57674)) ? (arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_3]) : (arr_14 [i_0] [i_2] [i_1] [i_3] [i_2] [i_3])))));
                        var_25 = ((/* implicit */signed char) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_2])) ? (3369475512U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_13)));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
                        {
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_6 + 1] [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1]))));
                            arr_24 [i_0] [i_0] [i_2] [i_5] [i_6] [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (unsigned short)25460)) == (((/* implicit */int) (_Bool)1)))));
                            arr_25 [17U] [i_0] [i_1] [i_2] [i_5] [(_Bool)1] [i_2] = ((/* implicit */_Bool) (+(arr_14 [i_6 + 1] [i_2] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1])));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_30 [i_2] [i_2] = ((/* implicit */short) (~(var_13)));
                            arr_31 [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_3);
                            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (var_4) : (var_13)));
                        }
                    }
                    var_29 ^= ((/* implicit */_Bool) ((unsigned short) (unsigned short)14081));
                    var_30 = ((/* implicit */unsigned long long int) var_15);
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((11087116166173231596ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (short)-7217)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (max((var_7), (((/* implicit */long long int) (signed char)34)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */signed char) var_3)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)109))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : ((+(var_7)))))));
                }
            } 
        } 
    } 
}
