/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34646
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) var_11)), (16853106445059496173ULL)))))) ? (((/* implicit */unsigned long long int) var_11)) : (min((16853106445059496173ULL), (((/* implicit */unsigned long long int) var_6))))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_11))));
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_11)), (1593637628650055468ULL)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1593637628650055442ULL))))) >> (((((/* implicit */int) arr_0 [i_0])) - (32358)))))) | (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_0 [i_0])))))) <= (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (unsigned short)28479))))));
            var_18 = ((/* implicit */unsigned short) ((signed char) arr_1 [i_0]));
        }
        for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_19 = ((/* implicit */long long int) (+(min((16853106445059496173ULL), (((/* implicit */unsigned long long int) 1355875041U))))));
            var_20 -= ((/* implicit */_Bool) ((var_6) ? ((-(min((arr_2 [i_2]), (((/* implicit */long long int) var_13)))))) : (min((min((var_9), (7121475988886134131LL))), (((long long int) arr_2 [i_0]))))));
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1593637628650055448ULL))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_1 [i_0]))))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [i_3])))) : (var_10)));
        arr_12 [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15934)) || ((!(var_6))))))));
    }
    for (signed char i_4 = 1; i_4 < 15; i_4 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_4 + 1]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 + 1]))) != (arr_2 [(unsigned short)12]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (arr_9 [i_4 + 1]) : (arr_2 [i_4])))) ? (((((/* implicit */_Bool) 916606551446290010ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [13ULL]))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))))))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)0)))));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_4 + 1])), ((~(var_11))))))));
        arr_16 [i_4] |= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) % (((/* implicit */int) ((unsigned short) var_3))))));
    }
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) (_Bool)1);
        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((((/* implicit */_Bool) 2084407686892230417ULL)) || (((/* implicit */_Bool) var_7)))))))) ? ((~(arr_2 [11U]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)22)))))));
    }
}
