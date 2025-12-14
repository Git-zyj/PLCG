/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190556
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) -965025285);
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(6610073536422556209LL))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-102)) + (2147483647))) << (((((-1821516296) + (1821516323))) - (27)))));
            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) -1328734220)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (signed char)-8))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_0] [8LL] [i_4] [i_6] [i_7] [i_7] |= ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)7)) / (((/* implicit */int) (unsigned char)220)))));
                            var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)101)) && ((_Bool)0)))) : (1380677789)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_22 *= ((((/* implicit */_Bool) -4443232207856868441LL)) ? (1786276035U) : (3133083664U));
                            arr_31 [i_0] [i_4] [i_8] [i_8] [i_9] [i_10] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) % ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2508691265U)))));
                            var_23 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) (signed char)101)) : (965025284)))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                for (long long int i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    {
                        arr_39 [i_0] [i_11] [i_12] [i_13] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3207))))) ? (((/* implicit */int) (signed char)101)) : (((-372954111) ^ (((/* implicit */int) (short)2877))))));
                        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) 13197466554582220298ULL))) & (((int) (signed char)101))));
                        arr_40 [i_13] [(_Bool)1] [i_12] [i_13 + 4] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) (unsigned short)65535)))));
                        arr_41 [2U] [i_11] [i_13] [i_13] [i_0] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) (short)32767))));
                        /* LoopSeq 3 */
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                        {
                            var_25 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 11698547996956760266ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1161883631U)));
                            arr_45 [i_0] [i_11] [i_13] [i_13] [i_14] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -796141757)))))) > (((-2445287691527474360LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)-23190))));
                        }
                        for (long long int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -796141757)) ? (((/* implicit */int) (short)-23190)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (signed char)104)) : ((+(1143067238)))));
                            arr_48 [i_15] [i_13] = ((/* implicit */unsigned long long int) -3572910045148130995LL);
                            var_28 ^= ((/* implicit */long long int) -796141757);
                            var_29 = ((/* implicit */int) 8592796949574033895LL);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_53 [i_16] [i_13 + 2] [i_13] [i_11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 1161883632U))) ? ((((_Bool)1) ? (((/* implicit */long long int) -965025259)) : (7342783932615963798LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)102)))));
                            var_30 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 16329274495535043580ULL)) ? (((/* implicit */int) (short)23190)) : (((/* implicit */int) (signed char)39)))) <= (((/* implicit */int) (short)14532))));
                        }
                    }
                } 
            } 
            var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 471216840U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-100))));
        }
        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (-1143067239) : (-1048576)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-1070846308048143939LL) : (14LL))));
    }
    var_33 = ((/* implicit */_Bool) max((((((11706819668014003838ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))))) ? ((~(9777031871805504861ULL))) : (((/* implicit */unsigned long long int) 7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((471216840U), (((/* implicit */unsigned int) (unsigned char)251))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)3))))))))));
    /* LoopNest 2 */
    for (signed char i_17 = 3; i_17 < 15; i_17 += 4) 
    {
        for (unsigned short i_18 = 1; i_18 < 15; i_18 += 4) 
        {
            {
                var_34 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8669712201904046754ULL)) ? (0ULL) : (17793025611235258178ULL)))))) ? ((-(((/* implicit */int) max((((/* implicit */short) (signed char)101)), ((short)-18707)))))) : (((((/* implicit */_Bool) min((1659411558), (((/* implicit */int) (unsigned char)217))))) ? (((/* implicit */int) (signed char)-54)) : (((int) (unsigned short)0))))));
                var_35 = ((/* implicit */unsigned char) ((((-1070846308048143939LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-23191))))) ? (((unsigned int) 2157045606U)) : ((((_Bool)0) ? (max((((/* implicit */unsigned int) (short)-26956)), (2137921689U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 630460968))))))))));
                var_36 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max(((short)-5987), (((/* implicit */short) (signed char)-54))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)0))))) : (((((/* implicit */_Bool) 1222768511U)) ? (1711146528U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103)))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (min((((((/* implicit */_Bool) (unsigned char)104)) ? (16617823652368665077ULL) : (((/* implicit */unsigned long long int) 1933733582U)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32748)))))))));
}
