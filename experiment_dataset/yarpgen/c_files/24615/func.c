/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24615
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 15214514247027616550ULL)) ? (((((/* implicit */_Bool) 6341736962707411661LL)) ? (3292512723U) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 6341736962707411661LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (1002454590U)))) > (((((/* implicit */_Bool) -1425244101236222469LL)) ? (6351324802264202934LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)178)) ? (-22LL) : (((/* implicit */long long int) 3292512723U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (0ULL) : (17089268886350124505ULL)))) ? (15886917607183645953ULL) : (((/* implicit */unsigned long long int) 135500758U))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (11941991616741238732ULL)))))))) ^ ((((((_Bool)1) || (((/* implicit */_Bool) 26)))) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)2670), (((/* implicit */short) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 135500758U))))) > ((-(((/* implicit */int) (unsigned char)227))))))), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36086)) && (((/* implicit */_Bool) -2147483618))))) >> (((13611577227341092886ULL) - (13611577227341092868ULL))))))))));
                arr_19 [i_5] = ((/* implicit */unsigned char) min((min((13611577227341092886ULL), (((/* implicit */unsigned long long int) 457741295)))), (max((((/* implicit */unsigned long long int) (unsigned short)22042)), (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (9196213716327353837ULL)))))));
                arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-88)), ((+(18446744073709551615ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12061))) : (9144755135479805273LL)))) > (max((22ULL), (((/* implicit */unsigned long long int) (short)496)))))))));
            }
        } 
    } 
}
