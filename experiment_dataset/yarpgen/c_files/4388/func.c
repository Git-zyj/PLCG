/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4388
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                var_10 = (_Bool)1;
                                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (short)31972))))))) ? (((((/* implicit */int) (_Bool)1)) >> ((((-(((/* implicit */int) (short)32736)))) + (32753))))) : (((/* implicit */int) min(((short)32763), (((/* implicit */short) (_Bool)1)))))));
                                var_12 = ((/* implicit */short) (signed char)-104);
                            }
                            var_13 &= ((/* implicit */_Bool) (short)(-32767 - 1));
                            var_14 = ((/* implicit */short) (~(((/* implicit */int) (short)-18933))));
                        }
                    } 
                } 
                var_15 &= ((/* implicit */signed char) min((((/* implicit */short) max(((signed char)74), (((/* implicit */signed char) (_Bool)1))))), (min((((/* implicit */short) (signed char)-4)), ((short)-5959)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        var_16 = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            var_17 ^= ((/* implicit */short) (_Bool)1);
            /* LoopNest 2 */
            for (signed char i_7 = 2; i_7 < 24; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    {
                        var_18 = (signed char)-60;
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)32767), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (short)-29784)) : (((/* implicit */int) (short)-11956))));
                        var_20 ^= ((/* implicit */short) (~(((/* implicit */int) (signed char)-91))));
                        /* LoopSeq 2 */
                        for (short i_9 = 2; i_9 < 24; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) : ((~(((/* implicit */int) (_Bool)0))))))) ? ((((!(((/* implicit */_Bool) (signed char)-113)))) ? (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)(-32767 - 1))))) : ((~(((/* implicit */int) (signed char)-67))))));
                            var_22 = ((/* implicit */signed char) (((_Bool)1) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) (_Bool)1))));
                            var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (max(((short)23501), (((/* implicit */short) (signed char)-88))))))) ? (((/* implicit */int) (short)30907)) : (((/* implicit */int) (signed char)-23))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            var_25 = (_Bool)1;
                            var_26 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-119))));
                        }
                        var_27 = ((((/* implicit */_Bool) (short)32767)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-81))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    var_28 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (_Bool)1))));
                    var_29 = ((/* implicit */short) (_Bool)0);
                }
                var_30 = ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (short)-17826)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)101)) : ((~(((/* implicit */int) (_Bool)1))))))));
            }
            for (signed char i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) != ((((_Bool)1) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-19133))))));
                var_32 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (short)17825)) < (((/* implicit */int) (short)32767))))), ((~(((/* implicit */int) (short)32512))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_14 = 4; i_14 < 24; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */signed char) (_Bool)1);
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */int) (short)23062)) + (((/* implicit */int) (signed char)127))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
                    {
                        var_36 = (signed char)99;
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (short)-32030))));
                    }
                    /* LoopSeq 3 */
                    for (short i_17 = 0; i_17 < 25; i_17 += 1) /* same iter space */
                    {
                        var_38 ^= ((/* implicit */_Bool) ((((((/* implicit */int) (short)32030)) < (((/* implicit */int) (signed char)91)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)32))));
                        var_39 |= ((/* implicit */short) (_Bool)0);
                    }
                    for (short i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
                    {
                        var_40 = (_Bool)1;
                        var_41 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-25))));
                        var_42 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_43 &= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)11104)) : (((/* implicit */int) (short)-30911))));
                        var_44 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) (short)-1))));
                        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)-1)))))));
                        var_46 = ((/* implicit */signed char) ((((/* implicit */int) (short)-11835)) | (((((/* implicit */int) (signed char)-67)) + (((/* implicit */int) (signed char)18))))));
                    }
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                {
                    var_47 &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-114))))));
                    /* LoopSeq 4 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_48 = ((/* implicit */short) (_Bool)1);
                        var_49 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))));
                        var_50 ^= (short)32749;
                    }
                    /* vectorizable */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_51 = (short)30907;
                        var_52 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)62))));
                        var_53 |= ((/* implicit */_Bool) (short)(-32767 - 1));
                    }
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                    {
                        var_54 = ((/* implicit */_Bool) (short)16320);
                        var_55 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-6678))));
                    }
                    /* vectorizable */
                    for (signed char i_24 = 0; i_24 < 25; i_24 += 1) 
                    {
                        var_56 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (signed char)-1))));
                        var_57 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-391))));
                    }
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                {
                    var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) min((((/* implicit */int) (short)16117)), ((-(((/* implicit */int) (_Bool)0)))))))));
                    var_59 = ((/* implicit */signed char) (~((-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-25))))))));
                    var_60 &= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))))) || (((/* implicit */_Bool) (short)-8192)))))));
                    var_61 = ((/* implicit */short) max(((signed char)110), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)90)))));
                    var_62 = ((/* implicit */short) min((var_62), ((short)22212)));
                }
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_63 = ((/* implicit */short) (signed char)(-127 - 1));
                    var_64 = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) min(((signed char)127), ((signed char)-111)))) + (126))))), ((~((~(((/* implicit */int) (signed char)89))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_27 = 0; i_27 < 25; i_27 += 1) 
                    {
                        var_65 = ((/* implicit */signed char) (_Bool)1);
                        var_66 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))));
                        var_67 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))));
                        var_68 = (short)-15160;
                        var_69 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)0))));
                    }
                    var_70 &= ((/* implicit */signed char) (-(((/* implicit */int) min((max(((_Bool)0), ((_Bool)0))), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-10586)))))))));
                }
            }
        }
        for (signed char i_28 = 0; i_28 < 25; i_28 += 3) /* same iter space */
        {
            var_71 = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) (short)-6037)) : (((/* implicit */int) max((((/* implicit */short) (signed char)-1)), ((short)32512)))))) > (((/* implicit */int) (_Bool)1))));
            var_72 = ((/* implicit */signed char) max((((/* implicit */short) (_Bool)0)), ((short)30963)));
            var_73 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((signed char)-125), ((signed char)-104))))));
        }
        for (signed char i_29 = 0; i_29 < 25; i_29 += 3) /* same iter space */
        {
            var_74 = ((/* implicit */short) ((((/* implicit */_Bool) (short)23389)) ? ((((_Bool)1) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (short)27989)) : (((/* implicit */int) (signed char)-120)))))) : (((/* implicit */int) (_Bool)1))));
            var_75 = ((/* implicit */_Bool) (-(max((((/* implicit */int) (short)2207)), ((-(((/* implicit */int) (short)-1))))))));
        }
        var_76 = ((/* implicit */short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (short)-13440))))))), ((_Bool)1)));
    }
    var_77 = ((/* implicit */signed char) min((((/* implicit */short) var_8)), (var_5)));
    var_78 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)30)) || (((/* implicit */_Bool) (signed char)-59)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)59))));
}
