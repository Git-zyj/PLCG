/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213254
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
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_16 = var_1;
                                var_17 = ((/* implicit */int) ((-6650608883320479335LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-31903)))));
                            }
                        } 
                    } 
                    var_18 &= ((long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 2])) ? (((int) -3)) : (995153038)));
                    var_19 &= ((/* implicit */long long int) max((((min((((/* implicit */int) var_6)), (var_2))) * (((((/* implicit */int) (unsigned char)138)) / (((/* implicit */int) arr_11 [(signed char)17] [i_0] [i_1] [i_2] [i_2])))))), (((((/* implicit */int) var_6)) - (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_2]) > (((/* implicit */int) arr_11 [17LL] [i_0] [17LL] [i_2 + 1] [i_2])))))))));
                    arr_13 [i_0] [i_1] [i_1] [i_2 + 3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6025396467532323597LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14431))) : (var_1)))) && (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [i_2])) || (((/* implicit */_Bool) arr_0 [i_2])))))) || (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_12 [12LL] [i_2])), (var_0))), (((/* implicit */unsigned long long int) (!(var_15)))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */int) arr_6 [i_0 - 2]);
        arr_14 [13] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (var_8)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [8]))) : (var_7))) : (((/* implicit */unsigned int) var_12))))) - (((((/* implicit */_Bool) ((long long int) var_3))) ? (min((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1])))))));
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (((~(((/* implicit */int) var_5)))) / (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)51104))))))) <= ((+(max((((/* implicit */long long int) (unsigned char)117)), (-6025396467532323597LL)))))));
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (var_14)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [3ULL] [3ULL])))))))), (((((unsigned int) (signed char)-127)) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_3 [(unsigned short)18] [i_0])))))))));
    }
    var_23 = ((/* implicit */unsigned short) var_10);
}
