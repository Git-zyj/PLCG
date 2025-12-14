/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241567
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [15LL] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) arr_1 [i_0] [i_0]))), (max((3153483080U), (((/* implicit */unsigned int) var_9))))))) && (((/* implicit */_Bool) ((signed char) (~(1141484227U))))));
        var_14 = ((((/* implicit */unsigned long long int) var_10)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66)))))) ? ((+(7735989466643002981ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_15 -= ((/* implicit */int) max((arr_5 [i_1]), (((/* implicit */unsigned short) (short)-32266))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (+(8527775980049936550ULL)));
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */signed char) -668421908);
            var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (65535LL) : (87563355562761421LL)))) * (((((/* implicit */_Bool) var_4)) ? (arr_8 [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) 3153483082U))))));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((int) var_4))))) ? ((+(252218054659684675ULL))) : (((/* implicit */unsigned long long int) 2066865711484581984LL))));
                var_18 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) arr_16 [i_4] [i_1] [i_1])))) + (((/* implicit */int) ((signed char) (_Bool)1)))));
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_25 [i_1] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) (+(var_7)))) ? ((+(((((/* implicit */long long int) ((/* implicit */int) var_1))) - (8908444972043872682LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))));
                            arr_26 [i_1] [i_6] [i_1] [i_5 - 1] = min((((/* implicit */long long int) ((max((3153483074U), (3153483083U))) ^ (1141484212U)))), (((long long int) ((3153483074U) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                            arr_27 [i_1] [i_1] [i_4] [i_5] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5 - 1] [i_1] [i_4] [i_5 - 1]))) : (arr_21 [i_1] [i_3] [i_1] [i_1] [i_1] [i_3]))));
                            var_19 = ((/* implicit */int) (!(((17026387671305791089ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)17084))) == (3153483080U)))))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+((+(((16672208437815107790ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) >> (0U)))), (((long long int) 2161896515U))));
            }
            /* vectorizable */
            for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_7 - 2] [16ULL] [16ULL] [i_7 - 1])) - (((/* implicit */int) arr_4 [i_7 - 2])))))));
                            arr_34 [i_1] [i_3] [i_7] [i_8] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (7599749776338519754LL))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)105)))) & (((/* implicit */int) (signed char)-68)))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */long long int) 2823481083U)) % (((arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [(signed char)1]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                        }
                    } 
                } 
                arr_35 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)0)))) ^ (((/* implicit */int) var_5))));
            }
            var_25 &= ((/* implicit */int) (!(((((/* implicit */int) (short)-12026)) != (((/* implicit */int) (_Bool)1))))));
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) 1420356402403760521ULL)) ? (8442339862064228793ULL) : (((/* implicit */unsigned long long int) arr_18 [i_3] [6U] [i_3] [i_3])))))) & (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (_Bool)0)), (1281480173)))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_10 = 3; i_10 < 18; i_10 += 1) 
            {
                arr_40 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2133070763U)) ? (((/* implicit */int) (_Bool)0)) : (-1089047613))) | (((/* implicit */int) ((1281480172) <= (((/* implicit */int) (short)7527)))))));
                arr_41 [i_1] [i_3] [i_1] [i_1] = (-(4294967283U));
                var_27 ^= ((/* implicit */short) ((unsigned long long int) ((short) arr_23 [i_1] [i_3] [14] [i_10 - 3])));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) var_12);
                            arr_47 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1]))) <= ((-(2U))));
                            var_29 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49))) == (1944720708U));
                        }
                    } 
                } 
            }
        }
        var_30 = ((/* implicit */unsigned long long int) var_11);
    }
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((-9223372036854775794LL), (((/* implicit */long long int) var_6)))) + (((/* implicit */long long int) (+(((/* implicit */int) (short)32762)))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_11)))) / (((((/* implicit */_Bool) (signed char)127)) ? (5112124126465391498ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))))))))));
    var_32 = ((/* implicit */int) min((var_32), ((-((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)66)))))))))));
}
