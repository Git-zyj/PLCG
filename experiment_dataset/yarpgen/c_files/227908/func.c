/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227908
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
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */short) ((signed char) ((signed char) var_16)))), (((short) ((signed char) 18446744073709551596ULL)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_3]))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-120))))), (((arr_1 [i_0] [i_0]) << (((((/* implicit */int) arr_0 [i_2])) - (3524))))))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) min(((~((~(((/* implicit */int) (short)22736)))))), (((/* implicit */int) (signed char)122))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (signed char)120)) << (((((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (short)21751)) : (((/* implicit */int) arr_12 [i_4])))) - (21744))))));
        var_21 -= ((/* implicit */unsigned char) (-(((long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) : (278077868U))))));
        arr_15 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (signed char)-115))))))));
    }
    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) arr_13 [i_5] [i_5])) : (((/* implicit */int) (unsigned short)27095)))), (max((((/* implicit */int) arr_9 [i_5] [i_5])), (arr_5 [i_5])))))));
        arr_19 [i_5] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max(((unsigned char)26), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48927)) & (((/* implicit */int) (_Bool)1))))) : (((arr_8 [i_5] [i_5] [i_5] [10LL] [i_5] [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5] [i_5] [i_5]))))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            for (unsigned short i_7 = 2; i_7 < 16; i_7 += 3) 
            {
                {
                    arr_24 [i_5] [i_5] [i_5] [i_7 + 1] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) ((arr_4 [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))), (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_6 + 3] [i_6] [i_5] [i_7])) ? (arr_8 [i_5] [i_6] [i_6] [i_6] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7] [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_5] [i_6])), (7164441633472917759ULL)))) ? ((-(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_5] [i_5] [6LL]))))))) ? (((((((/* implicit */_Bool) arr_2 [(unsigned short)10])) ? (((/* implicit */int) arr_22 [10U])) : (((/* implicit */int) arr_9 [i_5] [i_5])))) * ((-(((/* implicit */int) (unsigned char)107)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */int) (short)-30094)) : (((/* implicit */int) (signed char)-115))))))));
                }
            } 
        } 
    }
}
