/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222697
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
    var_13 = ((((/* implicit */int) min((var_6), (((/* implicit */short) (_Bool)1))))) > ((((_Bool)1) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */int) (signed char)-81)) % (((/* implicit */int) (unsigned short)36923)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_14 = ((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_15 = ((((/* implicit */_Bool) (unsigned char)10)) && (((/* implicit */_Bool) (unsigned char)63)));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            var_16 = ((/* implicit */int) (_Bool)1);
            var_17 = ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
        }
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 8; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    {
                        arr_17 [(signed char)7] [(_Bool)1] [i_3 - 1] [6U] [i_3 + 1] [(signed char)7] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)67))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (unsigned char)52)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))) ? (((((var_7) + (2147483647))) >> (((min((77778589), (arr_3 [i_5]))) - (77778569))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))));
                        var_18 = (unsigned char)15;
                        arr_18 [i_5] [i_5] [i_5] [i_5 + 1] = ((/* implicit */unsigned char) -77778589);
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)91))) ? (((((/* implicit */_Bool) (short)25592)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (248136412))))) : (arr_16 [i_1] [i_1] [5] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)31)) % (arr_13 [i_1] [i_1] [i_1])))) : (((0U) & (((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1])))))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) -1253699091);
            arr_19 [(unsigned char)3] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 + 1]))) > (arr_14 [i_3 + 1])))), (((arr_12 [i_3 - 1]) ? (arr_14 [(unsigned char)1]) : (arr_14 [i_1])))));
            var_21 = ((/* implicit */unsigned int) max((arr_15 [i_3 + 1]), (((/* implicit */unsigned char) (!(((((/* implicit */int) var_4)) <= (((/* implicit */int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            var_22 = ((/* implicit */_Bool) var_6);
            var_23 += ((/* implicit */unsigned char) arr_21 [i_1] [i_1] [i_1]);
        }
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) 4268158450U))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) ((119434176) % (((/* implicit */int) (unsigned short)58993))))) ? (max((((/* implicit */int) arr_23 [i_7] [i_7])), (-77778608))) : (((((/* implicit */int) arr_23 [i_7] [i_7])) | (((/* implicit */int) (unsigned char)199))))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65528)) || ((_Bool)0)))))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((arr_23 [(unsigned char)5] [i_7]), ((short)-17841)))) && ((!(((/* implicit */_Bool) -840029551)))))))));
    }
    for (signed char i_8 = 2; i_8 < 17; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_27 = ((/* implicit */int) (unsigned short)15362);
            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_29 [i_8 - 1]))));
        }
        for (int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)663)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)255))))) * ((~(1013482889U)))))));
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    {
                        arr_40 [i_8] [i_10] [i_10] [(_Bool)1] [i_10] [i_8] = ((/* implicit */short) (_Bool)1);
                        var_30 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_7)) ? (-1281487667) : (((/* implicit */int) arr_37 [3] [i_8 - 1] [i_8 - 1] [i_8])))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_28 [i_8] [i_8 + 2])) : (((/* implicit */int) arr_34 [(_Bool)1] [18] [i_12]))))));
                    }
                } 
            } 
            var_31 += ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)27713)) ^ (((/* implicit */int) var_9))))) <= (((((/* implicit */_Bool) -746461778)) ? (1363631677U) : (43464342U))))));
        }
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
        {
            var_32 ^= ((/* implicit */unsigned char) (signed char)3);
            var_33 = ((/* implicit */unsigned int) var_5);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
        {
            var_34 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_44 [i_8] [i_8] [i_8])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-95)) > (((/* implicit */int) var_4))))) : (((/* implicit */int) arr_29 [i_8]))));
            var_35 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_36 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_30 [i_8]))))));
            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (2090830896) : (((/* implicit */int) (unsigned short)5951)))))));
        }
        for (int i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3629463399U)) ? (((/* implicit */int) arr_41 [i_8] [i_8 + 2] [i_8])) : (((((/* implicit */_Bool) (unsigned char)4)) ? (-1) : (((/* implicit */int) arr_47 [i_15]))))));
            var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-10032)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_34 [i_8 + 2] [i_8 - 2] [i_8 + 2]))));
        }
    }
    for (signed char i_16 = 2; i_16 < 17; i_16 += 1) /* same iter space */
    {
        var_39 += ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-67)) && (((/* implicit */_Bool) (short)-22438))));
        var_40 = ((/* implicit */int) arr_45 [i_16]);
    }
}
