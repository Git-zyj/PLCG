/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30228
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
        var_12 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [2ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : ((~(var_4))));
        var_13 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 6235719477389344741ULL))))) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)200)) && (((/* implicit */_Bool) 6235719477389344741ULL)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_1] [1ULL] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [(unsigned char)17])) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) min((arr_3 [(unsigned char)14] [i_1]), (arr_1 [5ULL])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [14ULL])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1]))))) : (((/* implicit */int) max((arr_2 [i_1] [12ULL]), (arr_1 [i_0]))))))));
            var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [(unsigned char)15])))) : (((((/* implicit */int) var_5)) + (((/* implicit */int) arr_0 [i_1]))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [(unsigned char)9] [(unsigned char)9]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_7) : (var_11)))))));
            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [21ULL])) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [(unsigned char)4] [i_0])) : (((/* implicit */int) arr_1 [i_1]))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [17ULL] [17ULL])) + (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) 11512617961861366721ULL)) ? (15037085115278917325ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        }
        for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */unsigned long long int) arr_4 [5ULL] [(unsigned char)18]);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_0])) ? (var_4) : (arr_10 [i_4] [i_4] [i_3]))))), (arr_6 [6ULL] [19ULL] [i_0]))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (max((((/* implicit */unsigned long long int) var_1)), (arr_13 [i_0] [i_2] [i_0] [(unsigned char)16] [(unsigned char)16] [(unsigned char)16])))));
                    }
                } 
            } 
        }
    }
    var_18 = min((max((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (var_10))), (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (unsigned char i_6 = 3; i_6 < 12; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((min((min((arr_12 [i_5] [i_5] [i_5]), (var_11))), (((/* implicit */unsigned long long int) arr_11 [12ULL] [i_6] [i_6] [i_6])))) / (((unsigned long long int) min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_5])), (arr_21 [2ULL]))))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))) == (arr_12 [12ULL] [4ULL] [4ULL]))) ? (((/* implicit */int) ((unsigned char) arr_10 [i_7] [i_6] [i_7]))) : (((/* implicit */int) arr_20 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) arr_3 [8ULL] [i_6 - 3])) ? (arr_22 [0ULL] [i_6] [8ULL] [i_7]) : (((unsigned long long int) arr_21 [i_5])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_5] [i_5])), (arr_21 [4ULL])))) ? (((arr_14 [i_7]) + (var_7))) : (var_10))))))));
                }
            } 
        } 
    } 
    var_21 = min((((/* implicit */unsigned char) (((+(var_11))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (var_3));
}
