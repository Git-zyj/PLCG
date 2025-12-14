/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24601
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned char)16] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (signed char)-2))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)16256)) : (((/* implicit */int) (short)11326)))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) - (974549975U)))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-14)), ((short)-11328)))) : (((((/* implicit */_Bool) -1933151631)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (signed char)-106))))))));
                    var_11 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)11327)))))) ? (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (unsigned char)255)) : (-989920007))) : ((-(((/* implicit */int) (unsigned char)6))))))), ((+(((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned int) 0)) : (4294967295U)))))));
                    var_12 = ((/* implicit */unsigned short) min((1149570795), (15)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (4398046380032ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11480))))))));
                            arr_14 [i_2] [i_3] [0LL] [8ULL] [14U] [i_2] [i_2] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 11403235343618623304ULL)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)212))))) + (((((/* implicit */_Bool) 7495970726680564005ULL)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))));
                        }
                        for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_14 = ((((/* implicit */_Bool) (short)-11328)) ? (((((/* implicit */_Bool) (unsigned short)26)) ? (2118032133479652496LL) : (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775793LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-9436))))));
                            var_15 = ((/* implicit */int) 4804255169924522794ULL);
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 81108931)) ? (((/* implicit */unsigned long long int) 3459176534U)) : (4804255169924522794ULL)));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [(unsigned char)7] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) + (((((/* implicit */_Bool) (unsigned short)57512)) ? (((/* implicit */int) (unsigned char)17)) : (0)))));
                        }
                        arr_19 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned char)43))))) + (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16303))) : (1729382256910270464LL)))));
                    }
                    for (long long int i_6 = 2; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) (((-(max((18446744073709551612ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29694)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9436))) : (-1821978224424152218LL))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) (unsigned char)230))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2088674341)) ? (2042917788) : (((/* implicit */int) (unsigned char)0)))))))) ? (((((/* implicit */_Bool) max((-65516476496353206LL), (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)64182))))) : (((((/* implicit */_Bool) 11167606U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64205))) : (-7423548101103814484LL))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 523776U)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (short)3999)))) + ((-(((/* implicit */int) (unsigned short)64182)))))))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((4294443520U), (((/* implicit */unsigned int) -990120986)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)14558)) : (((/* implicit */int) (signed char)-47)))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)128)) ? (1943737826U) : (1028320654U)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)384)) + (((/* implicit */int) (signed char)-1))))) - (((((/* implicit */_Bool) (unsigned short)1354)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
                        var_20 *= ((/* implicit */unsigned int) (((-(253952LL))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)210)) + (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 24; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) - (((((/* implicit */_Bool) (signed char)98)) ? (-2042917788) : (((/* implicit */int) (_Bool)1))))));
                                var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1108489550U)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (unsigned char)115))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((min((((/* implicit */long long int) (unsigned short)44990)), (((((/* implicit */_Bool) 1885021268U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64182))) : (1710559681196547198LL))))) + (((/* implicit */long long int) min((0U), (11U)))))))));
                                arr_29 [i_1] [i_1] [i_8] = ((/* implicit */signed char) min((max((-7423548101103814484LL), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-7423548101103814484LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3839286804895691896ULL)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned char)114)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            {
                arr_36 [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 0ULL)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))))) + (min((2942147399U), (6U)))));
                arr_37 [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (unsigned short)10708)))) / (max((((/* implicit */int) (short)24456)), (-1947276472)))))) + (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned char)255)) : (4)))), (((((/* implicit */_Bool) (short)23141)) ? (9152081096736408034LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))))))));
                arr_38 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) -1947276472)) ? (((/* implicit */long long int) -235628810)) : (min((((/* implicit */long long int) (unsigned short)53617)), ((-9223372036854775807LL - 1LL))))));
            }
        } 
    } 
    var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16517)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)25)))))), (162121212272425783ULL)))));
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -9152081096736408034LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-9152081096736408034LL))))));
}
