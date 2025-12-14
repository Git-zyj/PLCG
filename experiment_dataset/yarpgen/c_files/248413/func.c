/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248413
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-102)), ((unsigned char)115)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_14 -= ((/* implicit */_Bool) var_6);
            arr_5 [i_0] [4U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0]))) == ((((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-7))))));
            arr_6 [i_1 - 1] [(unsigned short)3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) == (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))));
        }
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    arr_13 [i_0] [(unsigned char)6] [i_0] [i_0] |= ((unsigned long long int) arr_4 [i_2] [i_3]);
                    arr_14 [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_3] [i_4])) & (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3]))));
                }
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_3])) - (((/* implicit */int) arr_11 [7ULL] [i_2] [i_2]))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2])))));
            }
            arr_15 [i_2] = ((/* implicit */unsigned char) min((max((min((var_11), (9758316607041124692ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_2])) > (((/* implicit */int) arr_1 [i_0])))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min(((unsigned short)22369), ((unsigned short)49600)))))) == (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (2871962248U)))))));
        }
        for (int i_5 = 4; i_5 < 9; i_5 += 1) 
        {
            arr_18 [1] |= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))))))))) % ((-(((/* implicit */int) (signed char)-29))))));
            arr_19 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0]))))) << (((((/* implicit */int) (signed char)118)) - (106)))));
            var_17 = ((/* implicit */_Bool) min((var_17), (((((((/* implicit */int) arr_12 [6ULL] [i_5 - 2])) << (((((/* implicit */int) arr_12 [i_5 - 3] [i_0])) - (47953))))) <= (((/* implicit */int) (!((!(arr_10 [i_0] [i_0] [i_5 - 4] [i_5 + 1]))))))))));
        }
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)-14428))))));
        var_19 = ((/* implicit */long long int) min((((arr_4 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0])), (arr_1 [i_0]))))) : (((unsigned long long int) arr_12 [i_0] [i_0])))), (((/* implicit */unsigned long long int) (((~(8592341889090605027ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))));
    }
}
