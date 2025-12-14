/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225561
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
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)2047);
    var_18 = ((/* implicit */unsigned int) -1858745555);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) arr_0 [i_1] [i_0]);
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) 563813127)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) var_16)))) != ((-(((/* implicit */int) (unsigned char)72))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_21 *= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 + 2])))))));
                            var_22 &= ((/* implicit */unsigned int) var_5);
                            arr_9 [i_3] [i_2] [i_3] [i_3] [i_3] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)63489)))), (((((/* implicit */int) arr_7 [i_2])) << (((min((var_7), (((/* implicit */unsigned long long int) arr_5 [i_2])))) - (18385811991438941991ULL)))))))) : (((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)63489)))), (((((/* implicit */int) arr_7 [i_2])) << (((((min((var_7), (((/* implicit */unsigned long long int) arr_5 [i_2])))) - (18385811991438941991ULL))) - (60932082270614839ULL))))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_1] [i_1 + 1]) ? (arr_6 [i_1]) : (arr_6 [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_16)))))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63489)) | (var_3)))) == (min((((/* implicit */unsigned long long int) 1185452764U)), (5573792005879668871ULL)))))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [(signed char)9] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_0)) * (min(((-(-1578563772890818386LL))), (((/* implicit */long long int) var_10))))));
                            var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0])))) ? ((-(12872952067829882762ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [2LL]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(arr_3 [i_1] [i_4 + 1])))), ((-(arr_12 [i_0] [i_0] [i_0]))))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_5] [i_4 + 1] [i_1 + 2])) ? ((-(((arr_13 [i_0] [(_Bool)1] [i_0]) / (((/* implicit */int) arr_5 [(_Bool)0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 13009887647762672766ULL)))))));
                            arr_16 [i_0] [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */unsigned char) arr_7 [0U]);
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 640095592U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2048083299U)))) : (min((4294967288U), (((/* implicit */unsigned int) (unsigned short)63488)))))))));
}
