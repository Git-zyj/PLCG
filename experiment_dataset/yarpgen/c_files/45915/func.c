/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45915
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || ((_Bool)1)))), (var_6)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_2)))))) ? (((unsigned long long int) ((8469889255645795804ULL) / (8469889255645795780ULL)))) : ((+(9976854818063755818ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46103))) == (4294967295U)));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_3 + 1])))) > (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2 + 2] [i_2 + 1] [i_2]))) : (arr_7 [(short)3] [(short)3] [(unsigned char)10] [i_3])))) + (arr_2 [i_3 + 3]))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)185))) ? (((((/* implicit */int) (unsigned char)127)) << (((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)5] [i_0 + 2] [i_0 + 2]))))) - (18055501636393524248ULL))))) : (((/* implicit */int) (short)25783))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_16 [i_0] [10ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) 132540022008487081ULL))), (((((/* implicit */_Bool) 17002284702465648193ULL)) ? (540426369U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((unsigned long long int) ((((/* implicit */_Bool) -4261011350711178693LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12288))) : (882056357613951803LL))))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -8257678809675442837LL)))))))) + (((((((/* implicit */_Bool) (unsigned char)97)) ? (3435202311215799232LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61161))))) << (((((/* implicit */int) arr_3 [i_0])) - (1253)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
