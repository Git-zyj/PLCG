/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197606
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) ((((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)36264)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36264))))) ? (max((((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(_Bool)1]))) : (arr_3 [i_0]))), (arr_3 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0] [i_1 + 2]), (((/* implicit */short) (signed char)-119))))))));
            var_14 = ((/* implicit */unsigned char) arr_3 [i_0]);
        }
        var_15 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36264))) / (max((9633477037628037275ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((short) arr_0 [i_2] [(unsigned char)16]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2]))) ^ (1558099646U)))));
        var_16 = ((/* implicit */short) max((((((((/* implicit */int) arr_8 [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_2] [i_2])) - (85))))), ((-(arr_5 [i_2])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) max((arr_0 [i_3] [i_3]), (arr_0 [i_3] [i_3])))) ? (((((/* implicit */_Bool) (unsigned short)36265)) ? (((/* implicit */int) arr_0 [i_3] [5ULL])) : (((/* implicit */int) arr_0 [i_3] [i_3])))) : (((/* implicit */int) max((arr_0 [i_3] [i_3]), (arr_0 [i_3] [i_3])))));
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [4]))) : (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) min((95555367), (((/* implicit */int) (unsigned short)36264))))) : (arr_11 [i_3])))));
        var_18 = ((/* implicit */_Bool) arr_13 [i_3]);
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((_Bool) ((signed char) arr_1 [i_3] [i_3]))))));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
    {
        for (short i_5 = 1; i_5 < 6; i_5 += 4) 
        {
            {
                arr_22 [i_4 - 1] [i_4] [i_4 - 1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 1] [i_5 + 3]))) + (arr_11 [i_4]))))), (((((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1] [i_5 + 4])) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)56)), (-1307151666)))) : (min((((/* implicit */unsigned int) (signed char)-1)), (4294967266U)))))));
                arr_23 [i_4] [i_4] = ((/* implicit */_Bool) 8813267036081514358ULL);
            }
        } 
    } 
}
