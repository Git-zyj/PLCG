/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207753
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
    var_17 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-29)))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) == (arr_1 [i_0]))))))) >= (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_3 [9ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (var_9)))))));
                var_18 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) arr_7 [3ULL] [2ULL] [i_2] [i_2]);
                    var_20 -= ((/* implicit */signed char) var_1);
                    arr_10 [i_0] [(_Bool)1] [1ULL] [i_2] |= ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)101)), (((unsigned short) (unsigned short)4021))))) != (((/* implicit */int) (unsigned char)7))));
                }
                var_21 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (short)5017)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-5005)))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_12)))))), ((!(((/* implicit */_Bool) min(((unsigned char)94), (((/* implicit */unsigned char) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            arr_15 [14ULL] [i_4 + 1] [i_4] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-23)) + (2147483647))) << (((((/* implicit */int) (unsigned char)164)) - (164)))))), (min((((/* implicit */unsigned long long int) arr_14 [i_3] [i_3])), (15519373092800990296ULL))))) != (((unsigned long long int) arr_13 [i_4] [i_4 + 1]))));
            var_23 = ((/* implicit */unsigned short) max((min((arr_13 [i_3 + 3] [i_3 + 3]), (((/* implicit */unsigned long long int) arr_11 [i_3 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) ((unsigned short) var_9))) : ((~(((/* implicit */int) (unsigned short)1)))))))));
            var_24 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_11 [i_3])) ^ (7))), (((/* implicit */int) (short)15349))));
            var_25 = ((/* implicit */unsigned long long int) min((arr_14 [i_3 + 1] [(short)12]), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_4]))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) max((arr_11 [i_3 - 2]), (arr_17 [i_3 + 3])));
            var_27 ^= (!(((((/* implicit */int) arr_12 [i_3] [i_3 - 1])) == (((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 3])))));
            arr_18 [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (2632418975U))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 2])) >= (((/* implicit */int) ((signed char) arr_17 [i_5]))))))) : (var_12)));
        }
        var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4239)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned long long int) var_1)), (2927370980908561315ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_3] [(unsigned short)4])) : (((/* implicit */int) var_13))))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)8329)) : (((/* implicit */int) (short)-4989))))) ? (((/* implicit */int) (unsigned short)5130)) : (((/* implicit */int) ((((/* implicit */int) (signed char)91)) <= (((/* implicit */int) arr_11 [i_3]))))))) - (5106)))));
    }
    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))) % (((/* implicit */int) var_3)))))));
}
