/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194316
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
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [6LL] [i_1] |= ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-22580)) <= (((/* implicit */int) (unsigned short)12458)))))), (((((((/* implicit */int) (unsigned short)2504)) ^ (((/* implicit */int) (short)10429)))) * (((/* implicit */int) ((((/* implicit */int) (short)-4096)) < (((/* implicit */int) (short)359)))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)22579))))) && (((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)12458))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            {
                arr_16 [i_3] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)2504)) : (((/* implicit */int) (short)24100)))), (((/* implicit */int) (unsigned char)246)))) >= (max((((/* implicit */int) (signed char)-16)), ((-(-34495956)))))));
                /* LoopSeq 3 */
                for (short i_5 = 2; i_5 < 10; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (long long int i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_24 [i_3] [i_7 + 1] [i_4] [i_6] [i_6] [i_4] [i_4] = ((/* implicit */unsigned char) 2431282086344183139LL);
                                var_16 = ((/* implicit */unsigned short) 9223372036854775807LL);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) (!(((((var_0) & (((/* implicit */int) var_4)))) <= (max((2147483647), (-1)))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((-2147483647) >= (((/* implicit */int) (signed char)-53)))), ((!(((/* implicit */_Bool) (signed char)83)))))))));
                    arr_25 [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-12309)) : (1877831907))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)22579)) ? (((/* implicit */int) var_10)) : (var_6)))), (((((/* implicit */_Bool) 549755813887LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (6733319511875044551LL))))))));
                }
                for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)-22580)) & (0)))) & (-549755813887LL)))) ? (((((/* implicit */_Bool) (unsigned char)156)) ? (2147483647) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned char)0))));
                    var_20 |= ((/* implicit */long long int) (((+((-2147483647 - 1)))) > (((/* implicit */int) ((-2068010753) < (((/* implicit */int) (short)-1594)))))));
                    arr_28 [i_8] |= ((/* implicit */long long int) (((~(((/* implicit */int) ((((/* implicit */_Bool) 8591514778917684570LL)) && (((/* implicit */_Bool) var_8))))))) <= ((+(((/* implicit */int) ((-396064289762669829LL) > (((/* implicit */long long int) 2147483647)))))))));
                    arr_29 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) 1068578935))))))))));
                }
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned char) ((short) ((long long int) (unsigned char)28)));
                                var_22 = ((/* implicit */short) (((~(((((/* implicit */int) (short)14076)) >> (((((/* implicit */int) (unsigned short)65535)) - (65522))))))) + (((((((/* implicit */int) (signed char)49)) == (((/* implicit */int) (signed char)-27)))) ? (-1068578936) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)26)), ((unsigned char)255))))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */int) (((-(((/* implicit */int) var_3)))) == (var_0)))) >= ((-(((/* implicit */int) ((4260977240758566976LL) != (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                                var_24 = (-(((((/* implicit */_Bool) -1229355826)) ? (8589934591LL) : (((/* implicit */long long int) var_11)))));
                                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8380)) ? (((/* implicit */int) (unsigned char)139)) : (-197143576)))) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)171)) <= (-197143576)))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) (((~(((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-12643))))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1658663251641307169LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)86))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_9))))))))));
                    /* LoopSeq 4 */
                    for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (short)9726)) : (((/* implicit */int) (short)29042))))) || (((/* implicit */_Bool) (short)6775))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned short)35491))) && (((/* implicit */_Bool) ((((/* implicit */int) ((268435200) > (4194303)))) * (((((/* implicit */_Bool) 572918154)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (unsigned char)247)))))))));
                        var_29 = (-(((/* implicit */int) (short)32767)));
                    }
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        arr_42 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((short)-16788), (var_7)))) : (((/* implicit */int) (unsigned char)190))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) (short)127)))), ((!(((/* implicit */_Bool) (signed char)77))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-47)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16010)) ? (((/* implicit */int) (short)9726)) : (((/* implicit */int) (unsigned char)122)))))))));
                        var_30 = ((/* implicit */int) (unsigned short)22749);
                    }
                    for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */int) 9223372036854775807LL);
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)133)) && (((/* implicit */_Bool) (signed char)127))))) >= (((((/* implicit */_Bool) 6734286733522903056LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)12)))))))));
                        var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1201515946)) ? (((/* implicit */long long int) -1196410016)) : (-1LL))), (((/* implicit */long long int) (signed char)-107))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (min((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)182)))))))));
                        arr_45 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) 1468491860537576076LL));
                    }
                    for (unsigned char i_15 = 2; i_15 < 13; i_15 += 4) 
                    {
                        arr_50 [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)96))))), (((18014398509449216LL) / (((/* implicit */long long int) var_0)))))))));
                        /* LoopSeq 2 */
                        for (short i_16 = 3; i_16 < 11; i_16 += 2) 
                        {
                            var_34 = ((/* implicit */short) ((max((max((((/* implicit */long long int) (short)-21500)), (562949953421312LL))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned short)42786))))))) & (((/* implicit */long long int) 667755413))));
                            var_35 = (~(min((((/* implicit */int) ((short) var_1))), (0))));
                            arr_55 [i_15] = ((/* implicit */short) (-(((((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))))) / (((-8121929253113378640LL) + (0LL)))))));
                        }
                        for (int i_17 = 4; i_17 < 12; i_17 += 2) 
                        {
                            var_36 += ((((((/* implicit */_Bool) (unsigned char)143)) || (((/* implicit */_Bool) (unsigned char)96)))) ? (max((((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned char)160))))), (((-1) | (((/* implicit */int) (unsigned char)96)))))) : (max((((((/* implicit */_Bool) (short)25679)) ? (((/* implicit */int) (short)0)) : (1235511123))), (((((/* implicit */int) (signed char)-127)) / (((/* implicit */int) (unsigned short)50667)))))));
                            arr_58 [i_9] [i_9] [i_9] [i_9] [i_9] = (-((((~(((/* implicit */int) (short)(-32767 - 1))))) + (((/* implicit */int) ((-1777373402) >= (((/* implicit */int) (short)-18517))))))));
                            var_37 -= ((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) && ((!(((/* implicit */_Bool) (short)-1))))));
                            arr_59 [i_3] [i_4] [i_15 - 2] [i_17] [10LL] [i_4] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1468491860537576076LL) : (1468491860537576076LL)))) ? (((((536838144LL) * (((/* implicit */long long int) ((/* implicit */int) var_9))))) % (((long long int) (short)-9873)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)530), (((/* implicit */unsigned short) (unsigned char)113))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)196)))))))))));
                            var_38 = ((/* implicit */long long int) (short)0);
                        }
                    }
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) -1777373402))));
                    var_40 = ((((9223372036854775807LL) << (((((-6331206311782351159LL) + (6331206311782351174LL))) - (15LL))))) / (((/* implicit */long long int) ((/* implicit */int) var_15))));
                    var_41 = ((/* implicit */long long int) (short)-1);
                }
                for (long long int i_19 = 1; i_19 < 12; i_19 += 4) 
                {
                    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) 32767)) ? (((/* implicit */int) (signed char)76)) : (2147450880)));
                    arr_64 [i_3] [i_4] [i_19 + 1] [i_19 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)64)) > (((/* implicit */int) (short)-1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60)))))) : (((((/* implicit */_Bool) (unsigned char)5)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                    var_43 = ((/* implicit */int) (signed char)31);
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)1791)) : (((/* implicit */int) (short)32767)))) <= (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_12)) : (1777373402))))))));
                    var_45 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_9)))), ((-2147483647 - 1))))) && (((/* implicit */_Bool) ((short) (~(((/* implicit */int) (short)-14504))))))));
                }
                var_46 = ((/* implicit */short) (~(((/* implicit */int) (((~(((/* implicit */int) (signed char)44)))) >= (((/* implicit */int) (signed char)76)))))));
            }
        } 
    } 
}
