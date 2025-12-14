/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213604
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((int) ((short) var_8)));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_1] [(_Bool)1])))) ? (6672029987120181469LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 12892831873822190534ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) || (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) arr_3 [i_0] [(signed char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_2]);
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_1))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 12892831873822190543ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -6994373193661293660LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551602ULL)) && (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [0ULL] [i_1] [i_1])) : (((/* implicit */int) var_14)))))))))))));
                        arr_14 [i_0] [0LL] [i_0] [(short)6] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_2 - 2])), ((+(((/* implicit */int) (signed char)74))))))) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)32390))))) : (((((/* implicit */_Bool) 5553912199887361084ULL)) ? (arr_5 [11LL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (16019206622944859818ULL));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)84)))))))));
                    }
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (short)-26971);
}
