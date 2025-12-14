/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244160
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)108), (((/* implicit */unsigned char) (_Bool)1)))))))) % (((var_1) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) ((signed char) 4611686018427387903ULL)))))));
    var_11 *= ((/* implicit */short) var_2);
    var_12 = ((unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_13 = ((/* implicit */signed char) (-((~((+(((/* implicit */int) arr_0 [i_2] [i_1]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) arr_6 [i_2] [23] [i_0])) : (((/* implicit */int) arr_2 [i_0])))) != (((/* implicit */int) (!(arr_4 [8U] [i_1] [19U])))))) ? (arr_7 [i_3] [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [i_0])))) ^ ((-(((/* implicit */int) (signed char)53)))))))));
                        arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) min((max((((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)-27)))), (((((/* implicit */_Bool) 4611686018427387901ULL)) && (var_9))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13835058055282163692ULL)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))) || ((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0]))))))));
                    }
                }
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)27)) ? (((((((/* implicit */_Bool) arr_5 [(signed char)13] [i_1] [i_0] [i_0])) ? (13835058055282163712ULL) : (((/* implicit */unsigned long long int) 2854099673U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-115), (((/* implicit */signed char) arr_0 [i_0] [i_1])))))))) : (((((/* implicit */unsigned long long int) max((arr_1 [i_1]), (((/* implicit */int) arr_0 [(signed char)11] [i_0]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) * (4611686018427387904ULL))))))))));
                var_16 = ((/* implicit */int) (((_Bool)1) ? (13835058055282163722ULL) : (((/* implicit */unsigned long long int) -745569358))));
            }
        } 
    } 
}
