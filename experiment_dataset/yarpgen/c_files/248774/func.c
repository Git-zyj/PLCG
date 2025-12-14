/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248774
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
    var_15 = ((/* implicit */int) ((short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-10749)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22608)) ? (((/* implicit */int) (unsigned short)41321)) : (((/* implicit */int) var_10))))) && ((!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] [i_1] = ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-19105)), ((unsigned short)10046)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */int) (unsigned char)230))))) ? ((+(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) 3881880266058003957ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))));
                            }
                            for (short i_5 = 3; i_5 < 10; i_5 += 1) 
                            {
                                arr_18 [i_1] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)25128)) : (((/* implicit */int) (unsigned short)55490))))));
                                var_17 = ((/* implicit */unsigned char) (+((+((+(15712125916962350341ULL)))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                            {
                                var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)48)) << (((var_1) - (984351621)))))) ? (((((/* implicit */_Bool) (short)-10768)) ? (415880749) : (var_0))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)10050))))))) ? (((/* implicit */unsigned long long int) (+((+(var_0)))))) : (((unsigned long long int) (+(((/* implicit */int) var_14)))))));
                                var_20 = ((int) (+(((/* implicit */int) (unsigned short)10061))));
                                var_21 &= ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */int) (unsigned char)25))))))));
                                var_22 = (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55490)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)13518))))), (((unsigned long long int) -1500437093)))));
                            }
                            arr_22 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) (short)-11705);
                            var_23 = ((/* implicit */unsigned char) (((+(-6200121767979087408LL))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10768))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
