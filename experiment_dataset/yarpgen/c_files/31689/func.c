/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31689
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-360880188) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (signed char)117)) & (((/* implicit */int) (signed char)-105)))) : (((/* implicit */int) ((_Bool) 8333928221281152983ULL)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-1909)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) < (((((/* implicit */_Bool) (unsigned short)35115)) ? (((/* implicit */int) (short)-20370)) : (360880188))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [9ULL]);
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 360880188))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 219174372512679741ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_14 = ((((/* implicit */_Bool) ((long long int) (signed char)104))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)25666)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned short)40153)));
                                arr_12 [i_0 - 1] [i_0] [i_2] [4] [i_4] = var_0;
                                arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)20354)) ? (3616538141883283596LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-75))))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)17608)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (unsigned char)181)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            var_16 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
            arr_17 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 4804972580057299257ULL))));
            arr_18 [i_0 + 2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)178))));
            var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_0] [i_5] [i_0] [i_0] [i_0] [i_0]))) : (var_6)))) ? ((-(-1541836943))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)178))))));
        }
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_7 = 4; i_7 < 16; i_7 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13653)) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 6286793815015916249ULL)) ? (((/* implicit */int) (short)17608)) : (((/* implicit */int) (unsigned short)29071))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
            {
                arr_27 [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (14487906323084799428ULL) : (var_8)))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-75))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-23))))) | (((/* implicit */int) (_Bool)1))));
                arr_28 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_7] [i_6] [i_7 - 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)44))))) : (((((/* implicit */_Bool) (unsigned char)192)) ? (716347326086473416ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            for (int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
            {
                var_21 += ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_25 [i_9] [i_7 - 2] [i_7 + 1] [i_9])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)91))))));
                arr_31 [i_6] = ((/* implicit */unsigned char) ((var_10) ? (((/* implicit */int) min(((unsigned short)36464), (((/* implicit */unsigned short) var_0))))) : ((~(((/* implicit */int) var_4))))));
            }
            arr_32 [i_6] [i_7 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (360880173) : (-360880188)))) ? (((((/* implicit */_Bool) (short)-30857)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_7 + 2] [i_7 - 3])))) : (((/* implicit */int) ((unsigned char) arr_22 [i_7 - 4] [i_7 - 1])))));
            arr_33 [i_7] [i_6] [(unsigned char)15] = ((/* implicit */unsigned long long int) (~((((((~(((/* implicit */int) var_10)))) + (2147483647))) << (((var_11) - (1655807643100922906ULL)))))));
            var_22 ^= ((/* implicit */unsigned char) min((((int) var_11)), (((((/* implicit */_Bool) arr_3 [i_6] [i_7] [i_6])) ? (((/* implicit */int) (short)-19299)) : (-449480610)))));
        }
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
        {
            var_23 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (unsigned short)51231)) ? (((/* implicit */int) (short)-19299)) : (((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)14304))))))));
            arr_37 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (short)12303)) : (((/* implicit */int) (_Bool)1)))) : (((int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((int) arr_8 [i_6] [i_6] [19LL] [i_6]))) : (max((((((/* implicit */_Bool) (unsigned char)189)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23319))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) (short)5433)) : (((/* implicit */int) var_7)))))))));
            arr_38 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)-29303), (((/* implicit */short) (_Bool)1))))) ? ((~(((/* implicit */int) (unsigned short)10246)))) : ((~(((int) var_0))))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
        {
            arr_43 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-8))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) 1152780767118491648LL)) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [18U]))))) : ((~(var_2))))))));
            var_25 = ((/* implicit */unsigned short) (-2147483647 - 1));
        }
        arr_44 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_8 [(_Bool)1] [i_6] [i_6] [i_6]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-14045))))) : (((((/* implicit */_Bool) var_4)) ? (-8259271996576149975LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25139)))))));
    }
    for (signed char i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
    {
        var_26 |= ((/* implicit */short) ((unsigned char) 510141244));
        var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-32763))));
        var_28 = ((/* implicit */int) (+((-(12338930821943712374ULL)))));
        var_29 ^= ((/* implicit */unsigned long long int) (short)1879);
    }
}
