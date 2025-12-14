/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209494
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
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_14 = ((/* implicit */short) max(((~(((/* implicit */int) ((short) 4432715708554108894ULL))))), ((-(-304318471)))));
            arr_4 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned long long int) var_5)), (4432715708554108894ULL))) : ((+(14014028365155442721ULL)))));
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min(((-(58888931085943405ULL))), (max((17221027822432545779ULL), (((/* implicit */unsigned long long int) var_1)))))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned long long int) ((unsigned short) (_Bool)1)));
            arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned long long int) (short)-31741)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)198)))))))) : (max((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
            arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0])), ((unsigned short)21901)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((_Bool) 6721058799991119162ULL)))));
            var_16 = ((/* implicit */int) (~((~(1579594235994063712LL)))));
        }
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) 989282737)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)73))))), (arr_15 [i_0] [i_3] [i_0] [i_5]))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)32768))))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(0U)))))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((((/* implicit */_Bool) 6008162290235455677LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))));
                            arr_23 [i_0] [i_0] [i_4] [i_5] [i_0] = ((/* implicit */short) ((int) (-(((/* implicit */int) var_1)))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)20988))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_6 [i_3])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_6] [i_3]))))))));
                            var_20 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 6721058799991119162ULL)) ? (6721058799991119162ULL) : (((/* implicit */unsigned long long int) 1579594235994063712LL)))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_0] [i_4] [i_3] [i_0] [i_0])) ? (arr_17 [i_0] [i_3]) : (((/* implicit */unsigned long long int) var_12))))));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    }
                } 
            } 
            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */short) arr_18 [i_3] [i_0] [i_0] [i_0])), (var_9))), (((/* implicit */short) var_0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4272525644U)))) ? (((/* implicit */int) ((unsigned short) (short)2016))) : ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_3])) : (((/* implicit */int) (unsigned short)1272)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_0])))))))));
        }
    }
    for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6721058799991119162ULL)) ? (-1579594235994063712LL) : (((/* implicit */long long int) 997402057))))) : ((((_Bool)1) ? (14331356803155708904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25336)))))));
        var_25 = ((/* implicit */short) max(((((_Bool)0) ? (((/* implicit */int) (short)-12581)) : (((/* implicit */int) (short)14537)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (var_3)))));
        /* LoopSeq 4 */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_26 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (16979330269512617347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17868)))))) ? (((/* implicit */int) (short)-12169)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1869461853)))))))), (((((/* implicit */_Bool) 1839403517)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8965))) : (4190581021637931932ULL)))));
            arr_32 [i_8] [i_8] = ((/* implicit */int) ((long long int) min((max((((/* implicit */unsigned long long int) var_2)), (arr_7 [19]))), (((/* implicit */unsigned long long int) var_11)))));
        }
        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            arr_36 [i_10] [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_12 [i_8]), (((/* implicit */long long int) -302967271)))))));
            var_27 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            var_28 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1579594235994063713LL))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                arr_43 [i_8] = ((/* implicit */unsigned short) (+(((unsigned long long int) var_5))));
                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-8965)))))));
            }
            for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                var_30 = ((/* implicit */short) (~(((/* implicit */int) (short)22475))));
                var_31 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
            }
            var_32 += ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 302967270)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (signed char)32)))))));
            var_34 = ((/* implicit */unsigned long long int) (~(((int) 4115387270553842711ULL))));
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
    {
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-515820347)))) ? (var_12) : (((/* implicit */int) ((short) arr_28 [i_15] [i_15])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6907352034243233817LL)))))) : (((((/* implicit */_Bool) 3011404403U)) ? (7284271132986084641ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8965)))))));
        var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-22421)) ? (((/* implicit */int) (unsigned short)60644)) : (max((((/* implicit */int) (signed char)-76)), (((int) (unsigned short)0))))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
    {
        arr_55 [(unsigned char)8] [i_16] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_26 [18LL] [18LL] [18LL])) : (var_12))))))), (((unsigned long long int) max(((short)8965), ((short)-8965))))));
        /* LoopNest 3 */
        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 2) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_18 [i_16] [i_16] [i_18] [i_16]))) ? (((unsigned int) arr_58 [i_18] [i_18] [i_16] [i_18])) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (2147483647) : (-1318006653)))), (max((((/* implicit */unsigned int) (unsigned char)210)), (0U)))))));
                        arr_63 [i_16] [i_16] [i_17] [i_18] [i_18] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) var_8)))));
                    }
                } 
            } 
        } 
    }
}
