/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48039
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
    var_14 = ((/* implicit */short) var_0);
    var_15 = max((((/* implicit */long long int) ((((/* implicit */_Bool) max((-4643850546638723282LL), (((/* implicit */long long int) (unsigned char)163))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))), (((-7857859432277043654LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned short)46788))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)92)), ((unsigned short)49152)));
                                arr_15 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 1707178073955847541ULL)) ? (min((((/* implicit */unsigned int) (signed char)3)), (3375383179U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18747)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)18747)) : (((/* implicit */int) arr_2 [i_0 + 1])))))))));
                            }
                            for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)201)) ? (arr_4 [(unsigned short)7] [i_5]) : (((/* implicit */long long int) -571923473)))), (((/* implicit */long long int) arr_18 [i_0] [i_5] [i_2] [i_5] [i_5]))));
                                var_18 = ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 4] [11ULL] [i_5 + 1] [i_5]))) == (4293417230892451129LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4293417230892451102LL)) ? (((((/* implicit */_Bool) 14411660702508389159ULL)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (unsigned char)214)))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)21)) : (716386031)))))) : (arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1]));
                                arr_19 [i_0] [i_0] [i_0] [i_5] [i_0 - 1] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_3]);
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_2 + 2] [19])) <= (((/* implicit */int) arr_14 [i_5 + 1] [i_5] [i_3]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))));
                            }
                            for (int i_6 = 2; i_6 < 19; i_6 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(1707178073955847541ULL))))));
                                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7936)))))));
                                var_22 = ((/* implicit */unsigned long long int) min((((unsigned int) (-(((/* implicit */int) (unsigned char)201))))), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) (unsigned char)32)))))))));
                                var_23 = ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_2]);
                                var_24 = max((((/* implicit */int) (unsigned char)214)), (417058499));
                            }
                            arr_24 [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)104)) && (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 2]))))));
                        }
                    } 
                } 
                arr_25 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)102))));
            }
        } 
    } 
}
