/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21409
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
    var_16 |= ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) max(((unsigned short)11535), ((unsigned short)24576)))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-20735)) + (20738)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (short)-20728);
            arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1125515852732542752LL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)68))));
        }
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2 + 1] = ((/* implicit */long long int) (_Bool)1);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_3] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)-20728))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (-6856703921230683338LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_17 [i_2] [i_3] [i_4 - 1] = ((/* implicit */signed char) ((-1618525143) / (((/* implicit */int) (short)32766))));
                    arr_18 [i_2] [i_3] = ((/* implicit */unsigned short) ((short) (signed char)6));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_18 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (short)-30190)) : (614848059)))) ^ (((((/* implicit */_Bool) 10028816237442510482ULL)) ? (7803262188205403180ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31338)))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34201)) - (223109104)))) ? (((/* implicit */int) (signed char)91)) : (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)19668))))));
                            arr_25 [i_2] [i_5] [i_4 - 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)120)) ? (10417235843723655004ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137)))));
                            var_20 = (unsigned char)54;
                        }
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            arr_29 [i_2] [i_3] [i_3] [(unsigned char)10] [i_2] [i_5] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12))));
                            arr_30 [i_5] [i_5] [i_5] [i_4] [i_4 - 1] [i_2] [i_5] = ((((/* implicit */int) (unsigned short)31344)) >> (((-912717120) + (912717137))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-32759))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (4095LL) : (-4087LL)))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (unsigned char)124)))) : (((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)81)))))))));
                            var_23 *= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-125)) & (1007504674)));
                        }
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_2] [i_3] [i_2] [i_9] [i_4] = ((/* implicit */short) (signed char)125);
                        arr_38 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (-5876163150900896659LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119)))))) ? (((((/* implicit */_Bool) -302287679)) ? (13797722014072253499ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))))) : (((/* implicit */unsigned long long int) 5416890275891573733LL))));
                    }
                }
            } 
        } 
        var_24 += ((/* implicit */long long int) (unsigned char)47);
        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1921809939647857293ULL)) ? (-9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (unsigned char)124)) - (((/* implicit */int) (short)19646)))) : (-1007504655)));
    }
    for (unsigned int i_10 = 2; i_10 < 18; i_10 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 35184372088831ULL)) ? (((/* implicit */int) (short)-31097)) : (((/* implicit */int) (unsigned char)106)))))));
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)19650)) ? (((/* implicit */int) (short)31096)) : (((/* implicit */int) (unsigned short)31789))));
            var_28 = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1921809939647857302ULL)) ? (1007504674) : (((/* implicit */int) (unsigned char)14))))) * (min((((/* implicit */unsigned long long int) (unsigned char)218)), (16524934134061694295ULL))))) & (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -127795884)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) (unsigned char)228)) ? (16524934134061694311ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))))))));
        }
    }
}
