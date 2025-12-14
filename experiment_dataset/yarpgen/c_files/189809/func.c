/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189809
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 3])) < (((/* implicit */int) arr_12 [1LL] [i_3] [i_3 - 2] [i_2] [i_2] [i_1] [i_0 - 1]))))), ((+(((/* implicit */int) (unsigned short)2591))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)32766)) << (((((/* implicit */int) (short)7376)) - (7371))))) % (arr_5 [i_3 + 1] [i_1 - 1] [i_2] [i_4 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)18091)) * (((/* implicit */int) (short)-8245))))) ? (((5600611614373347064LL) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_3])) / (((/* implicit */int) (unsigned short)62925)))))))));
                                var_15 = 14534677650732412500ULL;
                                var_16 *= arr_10 [i_0] [i_0] [(unsigned char)11] [i_4 + 2];
                            }
                        } 
                    } 
                } 
                var_17 = min((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32746))) : (2489353060458179775ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1 + 4] [i_1 + 1] [i_1 + 3]))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_1] [i_5] [i_5] [i_6])) ? (((/* implicit */unsigned int) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_0 + 3])) : (4294967291U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-9097)), ((unsigned short)2611)))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((unsigned int) ((((/* implicit */int) (unsigned char)143)) + (((/* implicit */int) arr_10 [i_5] [(unsigned short)9] [i_5] [i_5 - 1])))))));
                            var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 3] [i_1 + 3] [i_6]))) / (max((((/* implicit */unsigned long long int) 1076796787U)), (134217216ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 -= (+(((((/* implicit */_Bool) ((unsigned short) (short)-9098))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-10049)))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((2489353060458179800ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))) ? (((max((-9091846871861363442LL), (((/* implicit */long long int) (unsigned char)76)))) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-8)), ((short)-11907))))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_22 = ((/* implicit */unsigned short) var_12);
    var_23 = ((/* implicit */int) var_13);
}
