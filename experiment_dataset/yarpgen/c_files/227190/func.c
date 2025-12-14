/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227190
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
    var_11 = ((/* implicit */unsigned short) ((var_5) >> (((((((/* implicit */_Bool) (-2147483647 - 1))) ? (198229182) : (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (unsigned char)213)))))) - (198229172)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((var_9) ^ (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_9)) ? (9595495475441905814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) ((var_4) >> (((var_5) - (3718005991U))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (max((255), (((/* implicit */int) var_8))))))) ? (max((-1880996380), (154717522))) : ((~((-2147483647 - 1))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] &= ((/* implicit */long long int) arr_2 [i_1]);
                    arr_10 [i_0] [i_1] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12ULL))))), (((((/* implicit */unsigned int) -154717523)) * (arr_8 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((((/* implicit */_Bool) -255)) ? (-155842795) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -3584831590973999735LL)) ? (arr_5 [i_0]) : (((/* implicit */int) var_8))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [1ULL] [i_4] [i_0] [i_4 - 1] = ((/* implicit */_Bool) arr_8 [i_3 - 1] [i_4 - 1] [i_4 - 1]);
                                arr_18 [i_0] [(unsigned short)2] [i_1] [i_0] [i_4 - 1] &= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -255)) > (1912513481U))))) > (min((min((var_4), (var_4))), (var_5))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2]);
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)42)), (198229185))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_28 [i_5] [i_5] [4LL] [6U] [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned int) 1880996376)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)81))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_5)))))));
                        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (short)-8184))) ? (((int) 154717522)) : (((int) (unsigned char)60))))) ? (var_3) : (max((arr_24 [i_7]), (-995570254))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) ((_Bool) var_2)))));
        arr_33 [i_8] = ((/* implicit */int) (~((+(-1317103020168827029LL)))));
        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((((((((/* implicit */int) (_Bool)1)) + ((-2147483647 - 1)))) - (-2147483637))) + (18)))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) < (var_3)));
    }
    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)1));
}
