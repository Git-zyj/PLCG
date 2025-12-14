/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204702
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) var_8)) ? (((long long int) var_6)) : ((-(var_7)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (var_1)))) ? ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-5373216984655419358LL)))))))));
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)0))));
        arr_2 [i_0] = ((unsigned long long int) ((arr_0 [i_0]) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (1774672617)));
        arr_3 [(_Bool)1] &= 1787301998U;
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) (short)-20);
        var_22 &= ((/* implicit */unsigned int) var_5);
        arr_7 [i_1] [(_Bool)1] = (+((-(-485603006))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        arr_10 [(_Bool)1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (short)14535)) ? (((/* implicit */int) (short)-30458)) : (((/* implicit */int) (short)11)))), (((/* implicit */int) (_Bool)1))));
        arr_11 [i_2] &= ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_2])), ((+(((/* implicit */int) var_15))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)16))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_4 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 7368403304361026489LL))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */short) ((((-1LL) != (((/* implicit */long long int) ((/* implicit */int) (short)31))))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) max(((unsigned short)33226), (((/* implicit */unsigned short) arr_1 [i_2])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (470969581684281701LL))), (9223372036854775807LL))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (((((/* implicit */_Bool) (short)-29751)) ? (var_2) : (((/* implicit */long long int) var_6))))))));
        var_23 = ((((/* implicit */int) ((unsigned char) (-(-8884162438089499068LL))))) & (((((/* implicit */int) max(((short)-20), (arr_14 [i_3])))) << (((/* implicit */int) (!((_Bool)0)))))));
        var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (_Bool)1)), (5373216984655419381LL)));
    }
    /* LoopSeq 4 */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((arr_8 [i_4]) != (var_7)))) : (((/* implicit */int) ((arr_17 [i_4] [(unsigned char)1]) || ((_Bool)1))))))), ((~(arr_8 [i_4])))));
        arr_20 [13LL] = ((/* implicit */unsigned short) ((max((min((-5416493460174229772LL), (((/* implicit */long long int) arr_6 [i_4])))), (((/* implicit */long long int) var_11)))) > (((/* implicit */long long int) arr_18 [i_4]))));
        arr_21 [i_4] = ((/* implicit */_Bool) 5373216984655419357LL);
        arr_22 [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */long long int) var_6)) : (max((var_7), (((/* implicit */long long int) (short)896))))))));
        var_26 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned int) (_Bool)0)), (arr_18 [i_4]))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 6; i_6 += 2) 
        {
            var_27 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-8329))))) ? (((((/* implicit */_Bool) -5943954824599816669LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (5943954824599816689LL))) : (((/* implicit */long long int) arr_18 [i_5])));
            var_28 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) var_17)))));
            var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)17)) || (arr_24 [i_5] [i_6]))))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            arr_30 [i_5] [i_7] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5])))))) < (((((/* implicit */_Bool) 6465367921495529496LL)) ? (arr_5 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
            arr_31 [(short)4] [(short)4] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-16887)) || (((/* implicit */_Bool) (short)-22110))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (13024410235780207063ULL)))) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) (_Bool)1))));
            var_31 = ((/* implicit */short) (unsigned short)50603);
        }
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_41 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_3)))) : (((int) arr_4 [i_5]))));
                        arr_42 [i_10] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_39 [i_5] [i_8 + 1] [i_9] [i_10]))) && (((/* implicit */_Bool) (short)16))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5089130909121728102LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((+(var_2)))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((5037523249047962729ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25354))))) != (((/* implicit */unsigned long long int) arr_25 [i_11] [i_11] [i_11])))))));
        var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((5373216984655419408LL), (((/* implicit */long long int) (short)31399)))) < (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))))), (((unsigned long long int) (_Bool)1))));
        arr_45 [i_11] [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(var_2)))) ? (arr_4 [i_11]) : (((/* implicit */long long int) max((3401130833U), (((/* implicit */unsigned int) arr_29 [i_11] [i_11]))))))), (((((/* implicit */_Bool) (short)22110)) ? (((((/* implicit */_Bool) 13409220824661588887ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5373216984655419381LL))) : (-5373216984655419378LL)))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        arr_48 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_34 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */short) (_Bool)0))))) ? (((arr_23 [i_12]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4168)))) : (((/* implicit */int) (short)11451))));
        var_35 = ((/* implicit */long long int) ((min((((/* implicit */long long int) (_Bool)1)), (((arr_32 [i_12] [i_12] [i_12]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12] [i_12] [i_12] [i_12]))))))) > (((/* implicit */long long int) (~(arr_18 [i_12]))))));
        /* LoopNest 3 */
        for (long long int i_13 = 3; i_13 < 7; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_58 [i_12] [0] [i_13 + 1] [i_13 + 1] [i_14] [i_13 + 1] = ((/* implicit */short) max(((~(((((/* implicit */_Bool) (short)16886)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9)))))), (max(((+(((/* implicit */int) (unsigned short)4095)))), (((/* implicit */int) max((arr_37 [i_15] [i_14] [i_13] [i_12]), (((/* implicit */unsigned char) arr_32 [i_13] [i_13] [i_12])))))))));
                        arr_59 [i_15] [i_12] [i_12] = ((/* implicit */long long int) ((signed char) (unsigned short)0));
                        var_36 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36304))) | (max((((/* implicit */long long int) (_Bool)1)), (7842481591475295982LL)))))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1015477341U)) & (var_7)))) ? (((((/* implicit */_Bool) arr_49 [(unsigned char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [(_Bool)1]))) : (5037523249047962737ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_49 [(_Bool)1]), (arr_49 [4U]))))))))));
    }
}
