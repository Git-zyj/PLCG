/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229636
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
    var_10 |= ((/* implicit */_Bool) (~(9223372019674906624ULL)));
    var_11 = ((/* implicit */int) 9223372019674906625ULL);
    var_12 = ((/* implicit */signed char) max(((+(min((9223372054034644987ULL), (((/* implicit */unsigned long long int) var_4)))))), (max((max((((/* implicit */unsigned long long int) (unsigned short)53527)), (9223372054034644984ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372019674906624ULL)) ? (((/* implicit */int) (signed char)121)) : (0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (unsigned short)46059)) : (((/* implicit */int) (unsigned short)14269))))) ? (((9223372054034644992ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12009))))) : (((/* implicit */unsigned long long int) ((2127795860) % (((/* implicit */int) (unsigned short)27510)))))));
            arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned short)27510))));
        }
        for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)51266)))))));
            arr_9 [(signed char)3] [i_2] = ((/* implicit */signed char) (_Bool)1);
            /* LoopSeq 4 */
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 2) /* same iter space */
            {
                arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4559384035706064178ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17022))) : (17885021187527772823ULL)))) ? (((((/* implicit */_Bool) (unsigned short)12009)) ? (((/* implicit */int) (signed char)-62)) : (var_3))) : (var_3)));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
                            arr_19 [i_0 + 1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
                arr_20 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8386)) * (((/* implicit */int) (signed char)-120))))) ? (((/* implicit */int) (unsigned short)8)) : (((((/* implicit */_Bool) (unsigned short)65502)) ? (((/* implicit */int) (unsigned short)34630)) : (((/* implicit */int) (_Bool)0))))));
            }
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
            {
                arr_24 [i_0] [i_0] [i_2 + 1] [i_6 - 1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((-(912883066)))));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_27 [i_2 + 1] [i_0 - 1] = ((/* implicit */_Bool) var_5);
                    arr_28 [i_7] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_5)) / (9223372054034645007ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                }
                for (signed char i_8 = 1; i_8 < 10; i_8 += 3) 
                {
                    arr_33 [(unsigned short)6] [i_2] [i_0] = ((/* implicit */int) (!((_Bool)1)));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34965))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (-652587437)));
                }
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_37 [i_0] [i_2] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57160)) % (((/* implicit */int) ((((/* implicit */_Bool) 16209797951955352862ULL)) && (((/* implicit */_Bool) (unsigned short)56305)))))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            arr_44 [8] [i_9] [i_9] [i_9] [3ULL] [i_9] = ((signed char) 1529053416413765463ULL);
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65520)) != (((/* implicit */int) (signed char)-80)))))));
                            var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)5850)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) : (6306620676366700984ULL))) >> (((2251799813685232ULL) - (2251799813685204ULL)))));
                            arr_45 [i_11] [i_11] [i_10] [i_9] [i_9] [i_2] [i_0] = ((/* implicit */signed char) 12709252996927734016ULL);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                arr_48 [i_12] [i_12] [i_12] [i_0] = (-(16209797951955352862ULL));
                var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))));
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    arr_51 [i_12] [i_2] [(_Bool)1] [i_13] = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)127)))) > (((/* implicit */int) (_Bool)0))));
                    arr_52 [i_0] [i_0] [i_12] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)59686)) * (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-17))))));
                }
                arr_53 [i_0] [i_2] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)64541))));
                arr_54 [i_12] [i_12] [i_12] = var_1;
            }
            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 12709252996927734016ULL)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned short)7684))));
            arr_55 [i_0] [i_0] [i_2] = (signed char)-121;
        }
        for (signed char i_14 = 1; i_14 < 10; i_14 += 3) 
        {
            arr_58 [i_0] [i_14 + 1] [i_14] = ((/* implicit */signed char) -1);
            arr_59 [i_0] [i_14 + 2] [i_14 - 1] |= (_Bool)1;
            arr_60 [i_14] = ((/* implicit */_Bool) (signed char)75);
        }
        arr_61 [i_0 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12709252996927734016ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_62 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((_Bool) (unsigned short)65534))) : (((/* implicit */int) (_Bool)0))));
        var_20 -= (signed char)(-127 - 1);
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8566163282413978780ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5737491076781817621ULL)));
            arr_66 [i_0 + 1] [i_15] = ((/* implicit */signed char) var_6);
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(-1277420234)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -4)) ? (((/* implicit */int) (_Bool)1)) : (986326355)))))))));
            arr_67 [i_15] = ((/* implicit */signed char) var_3);
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)86))))) && (((/* implicit */_Bool) ((signed char) (_Bool)0)))));
            arr_70 [i_0] [i_0] [i_16] = ((/* implicit */signed char) ((10941637352842968387ULL) << (((/* implicit */int) ((3757688639702217236ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))))))));
        }
    }
}
