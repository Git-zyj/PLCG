/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238615
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
    var_16 = ((/* implicit */_Bool) (unsigned char)14);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)14)))))))) ? ((((_Bool)1) ? (3445251627U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27790)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (18446744073709551590ULL)))) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)203)) || (((/* implicit */_Bool) var_1))))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25215)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27)))))) ? (((/* implicit */int) ((unsigned short) 18446744073709551596ULL))) : (((((/* implicit */_Bool) 2343621807637620062ULL)) ? (((/* implicit */int) (unsigned char)14)) : (192937300)))))) ? (((((long long int) (unsigned short)37396)) << (((/* implicit */int) ((unsigned short) (signed char)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) == (((((/* implicit */_Bool) (signed char)-75)) ? (var_9) : (((/* implicit */unsigned int) 10))))))))));
                var_17 = ((/* implicit */long long int) max((max((26ULL), (((/* implicit */unsigned long long int) (signed char)64)))), (((/* implicit */unsigned long long int) -1513191785704301164LL))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2604431042U)) ? (25ULL) : (((/* implicit */unsigned long long int) 0LL)))) % (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned short) (signed char)18)), ((unsigned short)29306))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_4] [i_4] = ((signed char) -1513191785704301135LL);
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                    arr_14 [i_2] [i_2] [i_3] [i_3] |= ((/* implicit */short) (unsigned char)164);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) (signed char)115)))));
                var_21 |= var_6;
            }
        } 
    } 
}
