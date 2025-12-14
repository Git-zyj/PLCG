/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48274
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)60754)) ? (var_9) : (15817986497485740916ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))))) ? (((((arr_3 [(short)13] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (687738422911827535ULL) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_0)) : (17759005650797724072ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1] [i_1])), (var_5)))), (max((2147483647), (((/* implicit */int) var_15)))))))));
                            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1076704912)) ? (((/* implicit */int) max(((unsigned short)57373), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) max((arr_2 [i_1] [i_3]), (arr_2 [i_1] [i_1]))))));
                            arr_9 [(_Bool)1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (-1186030402)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)222)) || (((/* implicit */_Bool) arr_8 [i_1] [i_1]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))) : ((+(var_10)))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (_Bool)0))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_6 [i_0] [i_0] [(unsigned short)5]))), (((unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (-497701084)))))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (short)-2733))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) var_7))))) >= (max((((/* implicit */unsigned long long int) (_Bool)0)), (17759005650797724081ULL))))) ? (((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-25832)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) (unsigned short)19162))))))));
}
