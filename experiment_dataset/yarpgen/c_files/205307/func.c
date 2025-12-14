/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205307
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2194072077U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-76)))))) <= (14090726359320966323ULL))) ? (min((4356017714388585300ULL), (((/* implicit */unsigned long long int) 2194072092U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5821)))));
                                var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((max((var_3), (arr_11 [i_0] [i_2] [i_2] [i_3] [i_4]))) - (((/* implicit */int) var_11))))), (1972882658588261359LL)));
                                var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)12136)), (var_10))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((((min((-1076047319678323734LL), (((/* implicit */long long int) (-2147483647 - 1))))) / (((/* implicit */long long int) 2100895223U)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2718663361U))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        arr_18 [i_0] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (4294967295U)))), ((-(arr_12 [i_5 + 1] [i_5 - 1] [i_1 + 1])))));
                        arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((short)-5821), (min(((short)-16384), (var_8)))))) < (((/* implicit */int) max(((unsigned short)1020), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))));
                        var_16 = ((/* implicit */long long int) (+(var_5)));
                        var_17 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_1 - 1] [i_5 + 1] [i_5] [(_Bool)1]))));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) 14090726359320966323ULL))));
                    }
                    arr_20 [i_5] [i_1] = ((/* implicit */unsigned short) (unsigned char)255);
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (_Bool)1))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_3);
    var_21 = ((/* implicit */signed char) max((((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62594))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), (var_8)));
}
