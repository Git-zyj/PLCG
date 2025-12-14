/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39190
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0 - 2] [(unsigned char)5] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (1666846474520501174ULL) : (((/* implicit */unsigned long long int) 1500735304)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9245669190303611307ULL)) ? (((/* implicit */int) (signed char)60)) : (1500735300))))));
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (arr_4 [20ULL]) : (((/* implicit */int) var_6)))) ^ ((+(min((((/* implicit */int) (_Bool)1)), (778922767))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_12 = ((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned long long int) var_5))))) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) var_7)) ? (2147483647) : (var_2))));
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((((/* implicit */int) var_6)) <= (-1500735289))))));
            var_14 = ((((/* implicit */_Bool) arr_8 [i_3 - 1] [(_Bool)1] [(_Bool)1] [i_3])) ? (((/* implicit */int) arr_8 [i_3 + 1] [16ULL] [16ULL] [i_3])) : (((/* implicit */int) (unsigned short)16352)));
        }
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (max((arr_5 [i_3] [i_3] [i_3] [i_3]), (arr_4 [8ULL]))) : (((((/* implicit */_Bool) arr_8 [12] [(signed char)6] [(signed char)6] [i_3 - 1])) ? (-1500735280) : (((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3] [i_3]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) arr_5 [i_3 - 1] [(signed char)1] [i_3] [(unsigned short)21]))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16361)) ? (((/* implicit */int) (unsigned short)16354)) : (-13)))) <= ((~(var_3)))));
    }
}
